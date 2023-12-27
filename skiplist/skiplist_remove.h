template <typename K, typename V> bool Skiplist<K, V>::remove( K k ) { //��ת�����ɾ���㷨
   QNodePosi< Entry<K, V> > p = search ( k ); //����Ŀ�����
   if ( !p->pred || (k != p->entry.key) )  return false; //�������ڣ�ֱ�ӷ���
   ListNodePosi< Quadlist< Entry<K, V> >* > qlist = last(); //�ӵײ�Quadlist��ʼ
   while ( p->above ) { qlist = qlist->pred; p = p->above; } //��������
   do { //������
      QNodePosi< Entry<K, V> > lower = p->below; //��ס��һ��ڵ㣬��
      qlist->data->remove( p ); //ɾ����ǰ��ڵ㣬��
      p = lower; qlist = qlist->succ; //ת����һ��
   } while ( qlist->succ ); //ֱ������
   while ( (1 < height()) && (first()->data->_size < 1) ) { //������
      List::remove( first() ); 
      first()->data->header->above = NULL;
   } //�Ѳ���������Quadlist�����ٱ�����ײ�ձ�
   return true; //ɾ���ɹ�
} //��᣺�������ڱ������ã���Щ���ڱ����ˣ�




