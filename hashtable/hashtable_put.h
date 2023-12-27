template <typename K, typename V> bool Hashtable<K, V>::put( K k, V v ) { //ɢ�б��������
   if ( ht[ probe4Hit( k ) ] ) return false; //��ͬԪ�ز����ظ�����
   Rank r = probe4Free( k ); //Ϊ�´����Ҹ���Ͱ��ֻҪװ�����ӿ��Ƶõ�����Ȼ�ɹ���
   ht[ r ] = new Entry<K, V>( k, v ); ++N; //����
   removed->clear( r );  //����ɾ�����
   if ( (N + removed->size())*2 > M ) rehash(); //��װ�����Ӹ���50%����ɢ��
   return true;
}




