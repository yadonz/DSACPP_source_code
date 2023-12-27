template <typename Tv, typename Te> //基于DFS的拓扑排序算法
Stack<Tv>* Graph<Tv, Te>::tSort( Rank s ) { // assert: 0 <= s < n
   reset(); Rank clock = 0; //全图复位
   Stack<Tv>* S = new Stack<Tv>; //用栈记录排序顶点
   for ( Rank v = s; v < s + n; v++ ) //从s起顺次检查所有顶点
      if ( UNDISCOVERED == status( v % n ) ) //一旦遇到尚未发现者
         if ( !TSort( v, clock, S ) ) { //即从它出发启动一次TSort
            while ( !S->empty() ) //任一连通域（亦即整图）非DAG
               S->pop();
            break; //则不必继续计算，故直接返回
         }
   return S; //若输入为DAG，则S内各顶点自顶向底排序；否则（不存在拓扑排序），S空
} //如此可完整覆盖全图，且总体复杂度依然保持为O(n+e)

template <typename Tv, typename Te> //基于DFS的拓扑排序算法（单趟）
bool Graph<Tv, Te>::TSort( Rank v, Rank& clock, Stack<Tv>* S ) { // v < n
   dTime( v ) = ++clock; status( v ) = DISCOVERED; //发现顶点v
   for ( Rank u = firstNbr( v ); - 1 != u; u = nextNbr( v, u ) ) //枚举v的所有邻居u
      switch ( status( u ) ) { //并视u的状态分别处理
         case UNDISCOVERED :
            parent( u ) = v; type( v, u ) = TREE;
            if ( !TSort( u, clock, S ) ) //从顶点u处出发深入搜索
               return false; //若u及其后代不能拓扑排序（则全图亦必如此），故返回并报告
            break;
         case DISCOVERED :
            type( v, u ) = BACKWARD; //一旦发现后向边（非DAG），则
            return false; //不必深入，故返回并报告
         default : // VISITED (digraphs only)
            type( v, u ) = ( dTime( v ) < dTime( u ) ) ? FORWARD : CROSS;
            break;
      }
   status( v ) = VISITED; S->push( vertex( v ) ); //顶点被标记为VISITED时，随即入栈
   return true; // v及其后代可以拓扑排序
}




