void reverse ( int* A, int lo, int hi ) { //数组倒置（规范整理之后的迭代版）
   while ( lo < hi ) //用while替换跳转标志和if，完全等效
      swap ( A[lo++], A[hi--] ); //交换A[lo]和A[hi]，收缩待倒置区间
} //O(hi - lo + 1)




