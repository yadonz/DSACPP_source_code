template <typename T> void PQ_ComplHeap<T>::insert( T e ) { //������������ȫ�������
   Vector<T>::insert( e ); //���´�����������ĩβ
   percolateUp( _elem, _size - 1 ); //�ٶԸô���ʵʩ���˵���
}




