template <typename T> QNodePosi<T> //��e��Ϊp�ĺ�̡�b�����ڲ���Quadlist
Quadlist<T>::insert( T const& e, QNodePosi<T> p, QNodePosi<T> b )
{ _size++; return p->insert( e, b ); } //�����½ڵ�λ�ã�below = NULL��




