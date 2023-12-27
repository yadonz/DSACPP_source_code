template <typename T> //向量归并排序
void Vector<T>::mergeSort( Rank lo, Rank hi ) { // 0 <= lo < hi <= size
   if ( hi - lo < 2 ) return; //单元素区间自然有序，否则...
   Rank mi = ( lo + hi ) / 2; //以中点为界
   mergeSort( lo, mi ); mergeSort( mi, hi ); //前缀、后缀分别排序
   merge( lo, mi, hi ); //归并
}




