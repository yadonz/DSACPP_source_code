//二分查找算法（版本A）：在有序向量的区间[lo, hi)内查找元素e，0 <= lo <= hi <= _size
template <typename T> static Rank binSearch( T* S, T const& e, Rank lo, Rank hi ) {
   while ( lo < hi ) { //每步迭代可能要做两次比较判断，有三个分支
      Rank mi = ( lo + hi ) >> 1; //以中点为轴点（区间宽度折半，等效于其数值表示的右移一位）
      if      ( e < S[mi] ) hi = mi; //深入前半段[lo, mi)继续查找
      else if ( S[mi] < e ) lo = mi + 1; //深入后半段(mi, hi)继续查找
      else                  return mi; //在mi处命中
   } //成功查找可以提前终止
   return -1; //查找失败
} //有多个命中元素时，不能保证返回秩最大者；查找失败时，简单地返回-1，而不能指示失败的位置




