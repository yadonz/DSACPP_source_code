int maxR( int A[], int lo, int hi ) { //������������A[lo, hi)�����ֵ�����ֵݹ飩
   if ( lo + 1 == hi ) //�����ݹ�������䳤���ѽ���1������
      return A[lo]; //ֱ�ӷ��ظ�Ԫ��
   else { //����һ�������lo + 1 < hi������ݹ��
      int mi = ( lo + hi ) >> 1; //����λ��ԪΪ�磬��ԭ����һ��Ϊ����A[lo, mi)��A[mi, hi)
      return max( maxR( A, lo, mi ), maxR( A, mi, hi ) ); //��������������ֵ���ٴ���ȡ����
   }
} //O(hi - lo)����������������ĳ���




