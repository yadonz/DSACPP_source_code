template <typename T> bool BST<T>::remove( const T& e ) { //��BST����ɾ���ؼ���e
   BinNodePosi<T>& x = search( e ); if ( !x ) return false; //ȷ��Ŀ����ڣ�����_hot�����ã�
   removeAt( x, _hot ); _size--; //ʵʩɾ��
   updateHeightAbove( _hot ); //����_hot�����������ȵĸ߶�
   return true;
} //ɾ���ɹ�����ɷ���ֵָʾ




