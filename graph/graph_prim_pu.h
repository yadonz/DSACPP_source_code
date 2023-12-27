template <typename Tv, typename Te> struct PrimPU { //针对Prim算法的顶点优先级更新器
   virtual void operator()( Graph<Tv, Te>* g, Rank v, Rank u ) {
      if ( UNDISCOVERED == g->status( u ) ) //对于v每一尚未被发现的邻接顶点u
         if ( g->priority( u ) > g->weight( v, u ) ) { //按Prim策略做松弛
            g->priority( u ) = g->weight( v, u ); //更新优先级（数）
            g->parent( u ) = v; //更新父节点
         }
   }
};




