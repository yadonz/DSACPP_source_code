template <typename T> void heapify( T* A, const Rank n ) { //Floyd�����㷨��O(n)ʱ��
   for ( Rank i = n / 2 - 1; - 1 != i; i-- ) //�Ե׶��ϣ�����
      percolateDown( A, n, i ); //�����˺ϲ��Ӷ�
}




