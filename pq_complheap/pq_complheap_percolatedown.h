//������ǰn�������еĵ�i��ʵʩ���ˣ�i < n
template <typename T> Rank percolateDown( T* A, Rank n, Rank i ) {
   Rank j; // i���䣨���������������У���Ϊ����
   while ( i != ( j = ProperParent( A, n, i ) ) ) //ֻҪi��j����
      swap( A[i], A[j] ), i = j; //���߻�λ�������������½����i
   return i; //�������˵ִ��λ�ã���i��j��
}




