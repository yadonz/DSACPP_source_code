template <typename T> //���б�����ʼ��λ��p�����Ϊn����������������
void List<T>::insertionSort( ListNodePosi<T> p, Rank n ) { // valid(p) && Rank(p) + n <= size
   for ( Rank r = 0; r < n; r++ ) { //��һΪ���ڵ�
      insert( search( p->data, r, p ), p->data ); //�����ʵ���λ�ò�����
      p = p->succ; remove( p->pred ); //ת����һ�ڵ�
   }
}




