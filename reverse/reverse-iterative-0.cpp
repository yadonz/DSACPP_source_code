void reverse( int* A, int lo, int hi ) { //数组倒置（直接改造而得的迭代版）
next: //算法起始位置添加跳转标志
   if ( lo < hi ) {
      swap( A[lo], A[hi] ); //交换A[lo]和A[hi]
      lo++; hi--; //收缩待倒置区间
      goto next; //跳转至算法体的起始位置，迭代地倒置A(lo, hi)
   } //else隐含了迭代的终止
} //O(hi - lo + 1)




