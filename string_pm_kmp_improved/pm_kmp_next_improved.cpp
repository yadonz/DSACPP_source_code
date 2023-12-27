int* buildNext ( char* P ) { //构造模式串P的next表（改进版本）
   size_t m = strlen ( P ), j = 0; //“主”串指针
   int* next = new int[m]; int t = next[0] = -1; //next表，首项必为-1
   while ( j < m - 1 )
      if ( 0 <= t && P[t] != P[j] ) //失配
         t = next[t]; //继续尝试下一值得尝试的位置
      else //匹配
         if ( P[++t] != P[++j] ) //附加条件判断
            next[j] = t; //唯当新的一对字符也匹配时，方照原方法赋值
         else
            next[j] = next[t]; //否则，改用next[t]（此时必有：P[next[t]] != P[t] == P[j]）
   return next;
}




