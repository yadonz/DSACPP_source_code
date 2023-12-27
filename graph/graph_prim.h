template <typename Tv, typename Te> //Prim算法：无向连通图，各边表示为方向互逆、权重相等的一对边
void Graph<Tv, Te>::prim( Rank s ) { // s < n
   reset(); priority ( s ) = 0;
   for ( Rank i = 0; i < n; i++ ) { //共需引入n个顶点和n-1条边
      status( s ) = VISITED;
      if ( -1 != parent( s ) ) type( parent( s ), s ) = TREE; //引入当前的s
      for ( Rank j = firstNbr( s ); - 1 != j; j = nextNbr( s, j ) ) //枚举s的所有邻居j
         if ( ( status( j ) == UNDISCOVERED ) && ( priority( j ) > weight( s, j ) ) ) //对邻接顶点j做松弛
            { priority( j ) = weight( s, j ); parent( j ) = s; } //与Dijkstra算法唯一的不同之处
      int shortest = INT_MAX;
      for ( Rank j = 0; j < n; j++ ) //选出下一极短跨边
         if ( ( status( j ) == UNDISCOVERED ) && ( shortest > priority( j ) ) )
            { shortest = priority( j ); s = j; }
   }
}




