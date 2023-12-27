template <typename T> void Vector<T>::heapSort( Rank lo, Rank hi ) { // 0 <= lo < hi <= size
   T* A = _elem + lo; Rank n = hi - lo; heapify( A, n ); //�����������佨��һ����ȫ����ѣ�O(n)
   while ( 0 < --n ) //������ժ�����Ԫ������������ĺ�׺��ֱ���ѿ�
      { swap( A[0], A[n] ); percolateDown( A, n, 0 ); } //�Ѷ���ĩԪ�ضԻ���������
}




