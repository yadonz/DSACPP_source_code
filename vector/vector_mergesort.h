template <typename T> //�����鲢����
void Vector<T>::mergeSort( Rank lo, Rank hi ) { // 0 <= lo < hi <= size
   if ( hi - lo < 2 ) return; //��Ԫ��������Ȼ���򣬷���...
   Rank mi = ( lo + hi ) / 2; //���е�Ϊ��
   mergeSort( lo, mi ); mergeSort( mi, hi ); //ǰ׺����׺�ֱ�����
   merge( lo, mi, hi ); //�鲢
}




