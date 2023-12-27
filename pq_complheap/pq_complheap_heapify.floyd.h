template <typename T> void heapify( T* A, const Rank n ) { //Floyd建堆算法，O(n)时间
   for ( Rank i = n / 2 - 1; - 1 != i; i-- ) //自底而上，依次
      percolateDown( A, n, i ); //经下滤合并子堆
}




