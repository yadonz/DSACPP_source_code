template <typename T> BinNodePosi<T> BinNode<T>::insertAsLC( T const& e )
   { return lc = new BinNode( e, this ); } //��e��Ϊ��ǰ�ڵ�����Ӳ��������

template <typename T> BinNodePosi<T> BinNode<T>::insertAsRC( T const& e )
   { return rc = new BinNode( e, this ); } //��e��Ϊ��ǰ�ڵ���Һ��Ӳ��������




