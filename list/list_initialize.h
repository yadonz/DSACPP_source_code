template <typename T> void List<T>::init() { //�б��ʼ�����ڴ����б����ʱͳһ����
   header = new ListNode<T>; trailer = new ListNode<T>; //����ͷ��β�ڱ��ڵ�
   header->succ = trailer; header->pred = NULL; //��ǰ����
   trailer->pred = header; trailer->succ = NULL; //�������
   _size = 0; //��¼��ģ
}




