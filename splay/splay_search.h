template <typename T> BinNodePosi<T>& Splay<T>::search( const T& e ) { //����չ���в���e
   BinNodePosi<T> p = BST<T>::search( e );
   _root = splay( p ? p : _hot ); //�����һ�������ʵĽڵ���չ����
   return _root;
} //������BST��ͬ�����۲��ҳɹ����_root��ָ����󱻷��ʵĽڵ�




