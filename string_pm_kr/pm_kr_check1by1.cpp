bool check1by1 ( char* P, char* T, size_t i ) { //指纹相同时，逐位比对以确认是否真正匹配
   for ( size_t m = strlen ( P ), j = 0; j < m; j++, i++ ) //尽管需要O(m)时间
      if ( P[j] != T[i] ) return false; //但只要散列得当，调用本例程并返回false的概率将极低
   return true;
}




