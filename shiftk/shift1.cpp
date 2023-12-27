int shift1 ( int* A, int n, int k ) { //通过GCD(n, k)轮迭代，将数组循环左移k位，O(n)
   if ( k < 1 ) return 0;
   int mov = 0, s = 0;
   while ( mov < n ) { //O(GCD(n, k)) = O(n*k/LCM(n, k))
      mov += shift ( A, n, s++, k );
   }
   return mov;
}




