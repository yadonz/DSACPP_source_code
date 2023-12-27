template <typename K, typename V> bool Hashtable<K, V>::remove( K k ) { //ɢ�б����ɾ���㷨
   Rank r = probe4Hit( k ); if ( !ht[r] ) return false; //ȷ��Ŀ�����ȷʵ����
   release( ht[r] ); ht[r] = NULL; --N; //���Ŀ�����
   removed->set(r); //���±�ǡ�������
   if ( removed->size() > 3*N ) rehash(); //������ɾ����ǹ��࣬��ɢ��
   return true;
}




