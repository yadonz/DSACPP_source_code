template <typename K, typename V> V* Hashtable<K, V>::get( K k ) //ɢ�б���������㷨
   { int r = probe4Hit ( k ); return ht[r] ? &( ht[r]->value ) : NULL; } //��ֹ������keyֵ��ͬ




