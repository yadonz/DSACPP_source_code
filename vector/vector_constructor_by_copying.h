template <typename T> //TΪ�������ͣ��������ظ�ֵ������'&#61;'
void Vector<T>::copyFrom ( T const* A, Rank lo, Rank hi ) { //����������A[lo, hi)Ϊ������������
   _elem = new T[ _capacity = max<Rank>( DEFAULT_CAPACITY, 2 * ( hi - lo ) ) ]; //����ռ�
   for ( _size = 0; lo < hi; _size++, lo++ ) //A[lo, hi)�ڵ�Ԫ����һ
      _elem[ _size ] = A[ lo ]; //������_elem[0, hi - lo)
} //��const���Σ���֤A�е�Ԫ�ز��±��۸ģ�����ʱ�� = O(hi-lo)




