__int64 power ( __int64 a, int n ) { //a^n�㷨��n >= 0
   __int64 pow = 1; //O(1)
   __int64 p = a; //O(1)
   while ( 0 < n ) { //O(logn)
      if ( n & 1 ) //O(1)
         pow *= p; //O(1)
      n >>= 1; //O(1)
      p *= p; //O(1)
   }
   return pow; //O(1)
} //power()




