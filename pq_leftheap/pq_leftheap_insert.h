template <typename T> void PQ_LeftHeap<T>::insert( T e ) {
   _root = merge( _root, new BinNode<T>( e, NULL ) ); //��e��װΪ��ʽ�ѣ��뵱ǰ��ʽ�Ѻϲ�
   _size++; //���¹�ģ
}




