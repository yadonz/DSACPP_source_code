int shift1 ( int* A, int n, int k ) { //ͨ��GCD(n, k)�ֵ�����������ѭ������kλ��O(n)
   if ( k < 1 ) return 0;
   int mov = 0, s = 0;
   while ( mov < n ) { //O(GCD(n, k)) = O(n*k/LCM(n, k))
      mov += shift ( A, n, s++, k );
   }
   return mov;
}




