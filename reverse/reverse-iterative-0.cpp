void reverse( int* A, int lo, int hi ) { //���鵹�ã�ֱ�Ӹ�����õĵ����棩
next: //�㷨��ʼλ�������ת��־
   if ( lo < hi ) {
      swap( A[lo], A[hi] ); //����A[lo]��A[hi]
      lo++; hi--; //��������������
      goto next; //��ת���㷨�����ʼλ�ã������ص���A(lo, hi)
   } //else�����˵�������ֹ
} //O(hi - lo + 1)




