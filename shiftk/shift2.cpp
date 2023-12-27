int shift2 ( int* A, int n, int k ) { //借助倒置算法，将数组循环左移k位，O(3n)
   k %= n; //确保k <= n
   reverse ( A, k ); //将区间A[0, k)倒置：O(3k/2)次操作
   reverse ( A + k, n - k ); //将区间A[k, n)倒置：O(3(n - k)/2)次操作
   reverse ( A, n ); //倒置整个数组A[0, n)：O(3n/2)次操作
   return 3 * n; //返回累计操作次数，以便与其它算法比较：3/2 * (k + (n - k) + n) = 3n
}




