int maxR( int A[], int n ) { //数组求最大值算法（线性递归版）
   if ( 2 > n ) //平凡情况，递归基
      return A[n - 1]; //直接（非递归式）计算
   else //一般情况，递归：在前n - 1项中的最大值与第n - 1项之间，取大者
      return max( maxR( A, n - 1 ), A[n - 1] );
} //O(1) * 递归深度 = O(1) * (n + 1) = O(n)




