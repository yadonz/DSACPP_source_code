template <typename T> T PQ_LeftHeap<T>::delMax() {
   BinNodePosi<T> lHeap = _root->lc; if ( lHeap ) lHeap->parent = NULL; //���Ӷ�
   BinNodePosi<T> rHeap = _root->rc; if ( rHeap ) rHeap->parent = NULL; //���Ӷ�
   T e = _root->data; delete _root; _size--; //ɾ�����ڵ�
   _root = merge( lHeap, rHeap ); //�ϲ�ԭ�����Ӷ�
   return e; //����ԭ���ڵ��������
}




