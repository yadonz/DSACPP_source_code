int sum ( int A[], int n ) { //数组求和算法（线性递归版）
   if ( 1 > n ) //平凡情况，递归基
      return 0; //直接（非递归式）计算
   else //一般情况
      return sum ( A, n - 1 ) + A[n - 1]; //递归：前n - 1项之和，再累计第n - 1项
} //O(1)*递归深度 = O(1)*(n + 1) = O(n)




