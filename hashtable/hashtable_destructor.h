template <typename K, typename V> Hashtable<K, V>::~Hashtable() { //析构前释放桶数组及非空词条
   for ( Rank i = 0; i < M; i++ ) //逐一检查各桶
      if ( ht[i] ) release( ht[i] ); //释放非空的桶
   release( ht ); //释放桶数组
   release( removed ); //释放懒惰删除标记
} //release()负责释放复杂结构，与算法无直接关系，具体实现详见代码包




