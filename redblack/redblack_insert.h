template <typename T> BinNodePosi<T> RedBlack<T>::insert( const T& e ) { //��e��������
   BinNodePosi<T>& x = search( e ); if ( x ) return x; //ȷ��Ŀ�겻���ڣ������_hot�����ã�
   x = new BinNode<T>( e, _hot, NULL, NULL, 0 ); _size++; //������ڵ�x����_hotΪ�����ڸ߶�0
   BinNodePosi<T> xOld = x; solveDoubleRed( x ); return xOld; //��˫�������󣬼��ɷ���
} //����e�Ƿ������ԭ���У�����ʱ����x->data == e




