template <typename T> //��S�����ڵ�x�������������������S�����ÿ�
BinNodePosi<T> BinTree<T>::attach( BinTree<T>*& S, BinNodePosi<T> x ) { // x->lc == NULL
   if ( x->lc = S->_root ) x->lc->parent = x; //����
   _size += S->_size; updateHeightAbove( x ); //����ȫ����ģ��x�������ȵĸ߶�
   S->_root = NULL; S->_size = 0; release( S ); S = NULL; return x; //�ͷ�ԭ�������ؽ���λ��
}

template <typename T> //��S�����ڵ�x�������������������S�����ÿ�
BinNodePosi<T> BinTree<T>::attach( BinNodePosi<T> x, BinTree<T>*& S ) { // x->rc == NULL
   if ( x->rc = S->_root ) x->rc->parent = x; //����
   _size += S->_size; updateHeightAbove( x ); //����ȫ����ģ��x�������ȵĸ߶�
   S->_root = NULL; S->_size = 0; release( S ); S = NULL; return x; //�ͷ�ԭ�������ؽ���λ��
}




