template <typename T> //�������б��ڽڵ�p��������trailer����n�����棩ǰ���У��ҵ�����e�������
ListNodePosi<T> List<T>::find( T const& e, Rank n, ListNodePosi<T> p ) const {
   while ( 0 < n-- ) //��0 <= n <= Rank(p) < _size������p�������n��ǰ������������
      if ( e == ( p = p->pred )->data ) return p; //����ȶԣ�ֱ�����л�ΧԽ��
   return NULL; //pԽ����߽���ζ�������ڲ���e������ʧ��
} //ʧ��ʱ������NULL




