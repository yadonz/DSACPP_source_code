template <typename T> T PQ_ComplHeap<T>::delMax() { //ȡ��������
   swap( _elem[0], _elem[--_size] ); //�Ѷ�����β������_size�ĵݼ�����������shrink()��
   percolateDown( _elem, _size, 0 ); //�¶Ѷ�����
   return _elem[_size]; //����ԭ�Ѷ�
}




