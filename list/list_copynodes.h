template <typename T> //�б��ڲ������������б�����λ��p���n��
void List<T>::copyNodes( ListNodePosi<T> p, Rank n ) { // p�Ϸ�����������n-1������
   init(); //����ͷ��β�ڱ��ڵ㲢����ʼ��
   while ( n-- ) { insertAsLast( p->data ); p = p->succ; } //������p��n��������Ϊĩ�ڵ����
}




