template <typename T> void List<T>::reverse() { //ǰ����
   ListNodePosi<T> p = header; ListNodePosi<T> q = trailer; //ͷ��β�ڵ�
   for ( Rank i = 1; i < _size; i += 2 ) //�����ס�ĩ�ڵ㿪ʼ��������ڣ�׽�Ե�
      swap( ( p = p->succ )->data, ( q = q->pred )->data ); //�����Գƽڵ��������
}




