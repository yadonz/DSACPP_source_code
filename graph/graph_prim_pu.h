template <typename Tv, typename Te> struct PrimPU { //���Prim�㷨�Ķ������ȼ�������
   virtual void operator()( Graph<Tv, Te>* g, Rank v, Rank u ) {
      if ( UNDISCOVERED == g->status( u ) ) //����vÿһ��δ�����ֵ��ڽӶ���u
         if ( g->priority( u ) > g->weight( v, u ) ) { //��Prim�������ɳ�
            g->priority( u ) = g->weight( v, u ); //�������ȼ�������
            g->parent( u ) = v; //���¸��ڵ�
         }
   }
};




