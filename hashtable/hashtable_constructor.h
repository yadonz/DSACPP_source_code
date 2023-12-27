template <typename K, typename V> Hashtable <K, V>::Hashtable( Rank c ) { //创建散列表，容量为
   M = primeNLT( c, 1048576, "../../_input/prime-1048576-bitmap.txt" ); //不小于c的素数M
   N = 0; ht = new Entry<K, V>*[M]; //开辟桶数组（假定成功）
   memset( ht, 0, sizeof( Entry<K, V>* ) * M ); //初始化各桶
   removed = new Bitmap( M ); //用位图记录懒惰删除位：总数 = removed->size() = removed->top
}




