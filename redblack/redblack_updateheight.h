template <typename T> Rank RedBlack<T>::updateHeight( BinNodePosi<T> x ) { //���½ڵ�߶�
   return x->height = IsBlack( x ) + max( stature( x->lc ), stature( x->rc ) ); //���Ӻڸ߶�ͨ����ȣ����ǳ���˫��
}




