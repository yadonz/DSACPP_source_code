int sum ( int A[], int lo, int hi ) { //��������㷨�����ֵݹ�棬���Ϊsum(A, 0, n)��
   if ( hi - lo < 2 ) return A[lo]; //�ݹ���������Ȳ���2
   int mi = ( lo + hi ) >> 1; //�����򣩾���ԭ����
   return sum ( A, lo, mi ) + sum ( A, mi, hi ); //�ݹ���ͣ�Ȼ��ϼ�
} //O(hi - lo)����������������ĳ���




