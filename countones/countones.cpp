int countOnes ( unsigned int n ) { //统计整数二进制展开中数位1的总数：O(logn)
   int ones = 0; //计数器复位
   while ( 0 < n ) { //在n缩减至0之前，反复地
      ones += ( 1 & n ); //检查最低位，若为1则计数
      n >>= 1; //右移一位
   }
   return ones; //返回计数
} //等效于glibc的内置函数int __builtin_popcount (unsigned int n)




