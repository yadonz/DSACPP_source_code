template <typename T> //�ϲ���a��bΪ���ڵ��������ʽ�ѣ��ݹ�棩
BinNodePosi<T> merge( BinNodePosi<T> a, BinNodePosi<T> b ) {
   if ( !a ) return b; //�˻����
   if ( !b ) return a; //�˻����
   if ( lt( a->data, b->data ) ) swap( a, b ); //ȷ��a>=b
   ( a->rc = merge( a->rc, b ) )->parent = a; //��a�����Ӷѣ���b�ϲ�
   if ( !a->lc || ( a->lc->npl < a->rc->npl ) ) //���б�Ҫ
      swap( a->lc, a->rc ); //����a�������Ӷѣ���ȷ�����Ӷѵ�npl����
   a->npl = a->rc ? a->rc->npl + 1 : 1; //����a��npl
   return a; //���غϲ���ĶѶ�
} //���㷨ֻʵ�ֽṹ�ϵĺϲ����ѵĹ�ģ�����ϲ�����߸������




