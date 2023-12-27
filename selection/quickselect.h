template <typename T> void quickSelect( Vector<T>& A, Rank k ) { //基于快速划分的k选取算法
   for ( Rank lo = 0, hi = A.size(); lo < hi; ) {
      Rank i = lo, j = hi; T pivot = A[lo]; //大胆猜测
      while ( i < j ) { //小心求证：O(hi - lo + 1) = O(n)
         do j--; while ( ( i < j ) && ( pivot <= A[j] ) );
         if ( i < j ) A[i] = A[j];
         do i++; while ( ( i < j ) && ( A[i] <= pivot ) );
         if ( i < j ) A[j] = A[i];
      } // assert: quit with i == j or j+1
      A[j] = pivot; // A[0,j) <= A[j] <= A(j, n)
      if ( k <= j ) hi = j; //suffix trimmed
      if ( i <= k ) lo = i; //prefix trimmed
   } //A[k] is now a pivot
}




