template <typename T> void List<T>::reverse() { //ǰ����
   if ( _size < 2 ) return; //ƽ�����
   for ( ListNodePosi<T> p = header; p; p = p->pred ) //��ǰ�������
      swap( p->pred, p->succ ); //�������ڵ��ǰ�������ָ��
   swap( header, trailer ); //ͷ��β�ڵ㻥��
}




