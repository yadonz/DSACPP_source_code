template <typename T> BinNodePosi<T> BST<T>::insert( const T& e ) { //���ؼ���e����BST����
   BinNodePosi<T>& x = search( e ); if ( x ) return x; //ȷ��Ŀ�겻���ڣ������_hot�����ã�
   x = new BinNode<T>( e, _hot ); //�����½ڵ�x����eΪ�ؼ��룬��_hotΪ��
   _size++; //����ȫ����ģ
   updateHeightAbove( x ); //����x�����������ȵĸ߶�
   return x; //�²���Ľڵ㣬��ΪҶ��
} //����e�Ƿ������ԭ���У�����ʱ����x->data == e




