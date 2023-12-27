template <typename Tv, typename Te> struct DijkPU { //���Dijkstra�㷨�Ķ������ȼ�������
   virtual void operator()( Graph<Tv, Te>* g, Rank v, Rank u ) {
      if ( UNDISCOVERED == g->status( u ) ) //����vÿһ��δ�����ֵ��ڽӶ���u����Dijkstra����
         if ( g->priority( u ) > g->priority( v ) + g->weight( v, u ) ) { //���ɳ�
            g->priority( u ) = g->priority( v ) + g->weight( v, u ); //�������ȼ�������
            g->parent( u ) = v; //��ͬʱ���¸��ڵ�
         }
   }
};




