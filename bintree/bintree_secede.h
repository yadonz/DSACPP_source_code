template <typename T> //���������������㷨��������x�ӵ�ǰ����ժ���������װΪһ�ö�����������
BinTree<T>* BinTree<T>::secede( BinNodePosi<T> x ) { // assert: xΪ�������еĺϷ�λ��
   FromParentTo( *x ) = NULL; //�ж����Ը��ڵ��ָ��
   updateHeightAbove( x->parent ); //����ԭ�����������ȵĸ߶�
   BinTree<T>* S = new BinTree<T>; S->_root = x; x->parent = NULL; //������xΪ��
   S->_size = x->size(); _size -= S->_size; return S; //���¹�ģ�����ط������������
}




