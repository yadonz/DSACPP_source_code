template <typename T> QNodePosi<T> //��e��Ϊ��ǰ�ڵ�ĺ�̡�b�����ڲ���Quadlist
QNode<T>::insert( T const& e, QNodePosi<T> b ) {
   QNodePosi<T> x = new QNode<T>( e, this, succ, NULL, b ); //�����½ڵ�
   succ->pred = x; succ = x; //����ˮƽ��������
   if ( b ) b->above = x; //���ô�ֱ��������
   return x; //�����½ڵ��λ��
}




