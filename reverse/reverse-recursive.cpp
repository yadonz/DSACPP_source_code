void reverse ( int* A, int lo, int hi ) { //���鵹�ã���ݹ���ݹ�棩
   if ( lo < hi ) {
      swap ( A[lo], A[hi] ); //����A[lo]��A[hi]
      reverse ( A, lo + 1, hi - 1 ); //�ݹ鵹��A(lo, hi)
   } //else���������ֵݹ��
} //O(hi - lo + 1)




