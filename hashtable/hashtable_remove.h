template <typename K, typename V> bool Hashtable<K, V>::remove( K k ) { //散列表词条删除算法
   Rank r = probe4Hit( k ); if ( !ht[r] ) return false; //确认目标词条确实存在
   release( ht[r] ); ht[r] = NULL; --N; //清除目标词条
   removed->set(r); //更新标记、计数器
   if ( removed->size() > 3*N ) rehash(); //若懒惰删除标记过多，重散列
   return true;
}




