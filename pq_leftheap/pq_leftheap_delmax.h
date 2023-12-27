template <typename T> T PQ_LeftHeap<T>::delMax() {
   BinNodePosi<T> lHeap = _root->lc; if ( lHeap ) lHeap->parent = NULL; //左子堆
   BinNodePosi<T> rHeap = _root->rc; if ( rHeap ) rHeap->parent = NULL; //右子堆
   T e = _root->data; delete _root; _size--; //删除根节点
   _root = merge( lHeap, rHeap ); //合并原左、右子堆
   return e; //返回原根节点的数据项
}




