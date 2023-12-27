template <typename T> //列表的归并排序算法：对起始于位置p的n个元素排序
void List<T>::mergeSort( ListNodePosi<T>& p, Rank n ) { // valid(p) && Rank(p) + n <= size
   if ( n < 2 ) return; //若待排序范围已足够小，则直接返回；否则...
   Rank m = n >> 1; //以中点为界
   ListNodePosi<T> q = p; for ( Rank i = 0; i < m; i++ ) q = q->succ; //找到后子列表起点
   mergeSort( p, m ); mergeSort( q, n - m ); //前、后子列表各分别排序
   p = merge( p, m, *this, q, n - m ); //归并
} //注意：排序后，p依然指向归并后区间的（新）起点




