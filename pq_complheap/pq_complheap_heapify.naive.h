template <typename T> void heapify( T* A, const Rank n ) { //���������㷨��O(nlogn)ʱ��
   for ( Rank i = 1; i < n; i++ ) //�Զ����£�����
      percolateUp( A, i ); //�����˲�����ڵ�
}




