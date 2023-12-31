template <typename T> bool BST<T>::remove( const T& e ) { //从BST树中删除关键码e
   BinNodePosi<T>& x = search( e ); if ( !x ) return false; //确认目标存在（留意_hot的设置）
   removeAt( x, _hot ); _size--; //实施删除
   updateHeightAbove( _hot ); //更新_hot及其历代祖先的高度
   return true;
} //删除成功与否，由返回值指示




