template <typename T> //�������б��ڽڵ�p��������trailer����n�����棩ǰ���У��ҵ�������e�������
ListNodePosi<T> List<T>::search( T const& e, Rank n, ListNodePosi<T> p ) const {
   do { // 0 <= n <= Rank(p) < _size
      p = p->pred; n--;  //��������
   } while ( ( -1 != n ) && ( e < p->data ) ); //����Ƚϣ�ֱ�����л�Խ��
   return p; //���ز�����ֹ��λ��
} //ʧ��ʱ������������߽��ǰ����������header�����������߿�ͨ��valid()�жϳɹ����




