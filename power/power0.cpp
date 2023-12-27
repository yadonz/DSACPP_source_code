__int64 powerBF ( __int64 a, int n ) { //a^n算法（蛮力版）：n >= 0
   __int64 pow = 1; //O(1)
   while ( 0 < n ) { //O(n)
      pow *= a; //O(1)
      n--; //O(1)
   }
   return pow; //O(1)
} //powerBF()




