template <typename T, typename VST> //Ԫ�����͡�������
void travPre_R( BinNodePosi<T> x, VST& visit ) { //��������������㷨���ݹ�棩
   if ( !x ) return;
   visit( x->data );
   travPre_R( x->lc, visit );
   travPre_R( x->rc, visit );
}




