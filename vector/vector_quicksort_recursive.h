template <typename T> //������������
void Vector<T>::quickSort( Rank lo, Rank hi ) { // 0 <= lo < hi <= size
   if ( hi - lo < 2 ) return; //��Ԫ��������Ȼ���򣬷���...
   Rank mi = partition( lo, hi ); //��[lo, hi)�ڹ������
   quickSort( lo, mi ); quickSort( mi + 1, hi ); //ǰ׺����׺���Եݹ�����
}




