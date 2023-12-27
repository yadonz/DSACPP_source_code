template <typename T> //���б�����ʼ��λ��p�����Ϊn��������ѡ������
void List<T>::selectionSort( ListNodePosi<T> p, Rank n ) { // valid(p) && Rank(p) + n <= size
   ListNodePosi<T> head = p->pred, tail = p;
   for ( Rank i = 0; i < n; i++ ) tail = tail->succ; //����������Ϊ(head, tail)
   while ( 1 < n ) { //�����ٻ�ʣ�����ڵ�֮ǰ���ڴ�����������
      ListNodePosi<T> max = selectMax ( head->succ, n ); //�ҳ�����ߣ�����ʱ�������ȣ�
      insert( remove( max ), tail ); //����������������ĩβ����Ϊ���������µ���Ԫ�أ�
      tail = tail->pred; n--;
   }
}




