template <typename Tv, typename Te> void Graph<Tv, Te>::bcc( Rank s ) { //基于DFS的BCC分解算法
   reset(); Rank clock = 0; Rank v = s; Stack<Rank> S; //栈S用以记录已访问的顶点
   do
      if ( UNDISCOVERED == status( v ) ) { //一旦发现未发现的顶点（新连通分量）
         BCC( v, clock, S ); //即从该顶点出发启动一次BCC
         S.pop(); //遍历返回后，弹出栈中最后一个顶点——当前连通域的起点
      }
   while ( s != ( v = ( ++v % n ) ) );
}
#define hca(x) (fTime(x)) //利用此处闲置的fTime[]充当hca[]
template <typename Tv, typename Te> //顶点类型、边类型
void Graph<Tv, Te>::BCC( Rank v, Rank& clock, Stack<Rank>& S ) { // assert: 0 <= v < n
   hca( v ) = dTime( v ) = ++clock; status( v ) = DISCOVERED; S.push( v ); // v被发现并入栈
   for ( int u = firstNbr( v ); - 1 != u; u = nextNbr( v, u ) ) //枚举v的所有邻居u
      switch ( status( u ) ) { //并视u的状态分别处理
         case UNDISCOVERED:
            parent( u ) = v; type( v, u ) = TREE; BCC( u, clock, S ); //从顶点u处深入
            if ( hca( u ) < dTime( v ) ) //遍历返回后，若发现u（通过后向边）可指向v的真祖先
               hca( v ) = min( hca( v ), hca( u ) ); //则v亦必如此
            else //否则，以v为关节点（u以下即是一个BCC，且其中顶点此时正集中于栈S的顶部）
               while ( u != S.pop() ); //弹出当前BCC中（除v外）的所有节点，可视需要做进一步处理
            break;
         case DISCOVERED:
            type( v, u ) = BACKWARD; //标记(v, u)，并按照“越小越高”的准则
            if ( u != parent( v ) ) hca( v ) = min( hca( v ), dTime( u ) ); //更新hca[v]
            break;
         default: //VISITED (digraphs only)
            type( v, u ) = ( dTime( v ) < dTime( u ) ) ? FORWARD : CROSS;
            break;
      }
   status( v ) = VISITED; //对v的访问结束
}
#undef hca




