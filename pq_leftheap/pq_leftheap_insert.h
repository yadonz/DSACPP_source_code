template <typename T> void PQ_LeftHeap<T>::insert( T e ) {
   _root = merge( _root, new BinNode<T>( e, NULL ) ); //将e封装为左式堆，与当前左式堆合并
   _size++; //更新规模
}




