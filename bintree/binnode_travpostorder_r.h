template <typename T, typename VST> //Ԫ�����͡�������
void travPost_R( BinNodePosi<T> x, VST& visit ) { //��������������㷨���ݹ�棩
   if ( !x ) return;
   travPost_R( x->lc, visit );
   travPost_R( x->rc, visit );
   visit( x->data );
}




