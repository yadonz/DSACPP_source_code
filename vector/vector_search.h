template <typename T> //����������������[lo, hi)�ڣ�ȷ��������e�����һ���ڵ����
Rank Vector<T>::search( T const& e, Rank lo, Rank hi ) const { // 0 <= lo < hi <= _size
   return ( rand() % 2 ) ? binSearch( _elem, e, lo, hi ) : fibSearch( _elem, e, lo, hi );
} //�ȸ��ʵ����ʹ�ö��ֲ��ҡ�Fibonacci����




