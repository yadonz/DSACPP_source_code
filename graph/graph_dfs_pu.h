template <typename Tv, typename Te> struct DfsPU { //���DFS�㷨�Ķ������ȼ�������
   virtual void operator()( Graph<Tv, Te>* g, int uk, int v ) {
      if ( g->status( v ) == UNDISCOVERED ) //����ukÿһ��δ�����ֵ��ڽӶ���v
         if ( g->priority( v ) > g->priority( uk ) - 1 ) { //���䵽������ĸ�����Ϊ���ȼ���
            g->priority( v ) = g->priority( uk ) - 1; //�������ȼ�������
            g->parent( v ) = uk; //���¸��ڵ�
            return; //ע�⣺��BfsPU()��ͬ������ֻҪ��һ���ڽӶ���ɸ��£�������������
         } //���Ч����ͬ�ڣ��󱻷���������
   }
};



