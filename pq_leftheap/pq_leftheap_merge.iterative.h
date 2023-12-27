template <typename T> //�ϲ���a��bΪ���ڵ��������ʽ�ѣ������棩
BinNodePosi<T> merge( BinNodePosi<T> a, BinNodePosi<T> b ) {
   if ( !a ) return b; //�˻����
   if ( !b ) return a; //�˻����
   if ( lt( a->data, b->data ) ) swap( a, b ); //ȷ��a>=b
   for ( ; a->rc; a = a->rc ) //���Ҳ�������·�鲢��ֱ����a->rc����b���
      if ( lt( a->rc->data, b->data ) ) //ֻ����a->rc < bʱ������ʵ�ʵĲ���
         { b->parent = a; swap( a->rc, b ); } //����b�ĸ��ڵ㣨�������Ӷѣ�
   ( a->rc = b )->parent = a; //ֱ�ӽ���b�Ĳ��ಿ�֣���Ȼ�ǿգ�
   for ( ; a; b = a, a = a->parent ) { //��a�������Ҳ��������ݣ�b == a->rc��
      if ( !a->lc || ( a->lc->npl < a->rc->npl ) ) //���б�Ҫ
         swap( a->lc, a->rc ); //ͨ������ȷ�����Ӷѵ�npl����
      a->npl = a->rc ? a->rc->npl + 1 : 1; //����npl
   }
   return b; //���غϲ���ĶѶ�
} //���㷨ֻʵ�ֽṹ�ϵĺϲ����ѵĹ�ģ�����ϲ�����߸������



