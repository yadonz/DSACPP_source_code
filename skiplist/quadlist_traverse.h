template <typename T> //����Quadlist���Ը��ڵ�����ʵʩvisit����
void Quadlist<T>::traverse( void ( *visit )( T& ) ) { //���ú���ָ����ƣ�ֻ����ֲ����޸�
   QNodePosi<T> p = header;
   while ( ( p = p->succ ) != trailer ) visit( p->data );
}

template <typename T> template <typename VST> //����Quadlist���Ը��ڵ�����ʵʩvisit����
void Quadlist<T>::traverse( VST& visit ) { //���ú���������ƣ���ȫ�����޸�
   QNodePosi<T> p = header;
   while ( ( p = p->succ ) != trailer ) visit( p->data );
}




