//二分查找算法（版本C）：在有序向量的区间[lo, hi)内查找元素e，0 <= lo <= hi <= _size
template <typename T> static Rank binSearch( T* S, T const& e, Rank lo, Rank hi ) {
   while ( lo < hi ) { //每步迭代仅需做一次比较判断，有两个分支
      Rank mi = ( lo + hi ) >> 1; //以中点为轴点（区间宽度折半，等效于其数值表示的右移一位）
      ( e < S[mi] ) ? hi = mi : lo = mi + 1; //经比较后确定深入[lo, mi)或(mi, hi)
   } //成功查找不能提前终止
   return lo - 1; //至此，[lo]为大于e的最小者，故[lo-1]即为不大于e的最大者
} //有多个命中元素时，返回最靠后者；查找失败时，返回失败的位置




