template <typename T> //��e���浱ǰ�ڵ�֮������ڵ�ǰ�ڵ������б������ڱ�β�ڵ�trailer��
ListNodePosi<T> ListNode<T>::insertAsSucc( T const& e ) {
   ListNodePosi<T> x = new ListNode( e, this, succ ); //�����½ڵ�
   succ->pred = x; succ = x; //������������
   return x; //�����½ڵ��λ��
}




