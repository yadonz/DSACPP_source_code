template <typename T> //��e������ǰ�ڵ�֮ǰ�����ڵ�ǰ�ڵ������б������ڱ�ͷ�ڵ�header��
ListNodePosi<T> ListNode<T>::insertAsPred( T const& e ) {
   ListNodePosi<T> x = new ListNode( e, pred, this ); //�����½ڵ�
   pred->succ = x; pred = x; //������������
   return x; //�����½ڵ��λ��
}




