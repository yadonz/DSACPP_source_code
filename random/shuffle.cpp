void shuffle( int A[], int n ) { //��A[0, n)�������
   for ( ; 1 < n; --n ) //�Ժ���ǰ
      swap( A[rand() % n], A[n - 1] );
}

void shuffle( int A[], int lo, int hi ) //��A[lo, hi)�������
   { shuffle( A + lo, hi - lo ); }




