template <typename K, typename V> V* Skiplist<K, V>::get( K k ) { //��ת����������㷨
   QNode< Entry<K, V> >* p = search(k); //�����Ƿ����У�search()�����᷵��NULL
   return (p->pred && p->entry.key == k) ? &(p->entry.value) : NULL; //���������ж�
} //�ж������ʱ����������




