void reverse ( int* A, int lo, int hi ) { //���鵹�ã��淶����֮��ĵ����棩
   while ( lo < hi ) //��while�滻��ת��־��if����ȫ��Ч
      swap ( A[lo++], A[hi--] ); //����A[lo]��A[hi]����������������
} //O(hi - lo + 1)




