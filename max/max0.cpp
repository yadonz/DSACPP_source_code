int maxI( int A[], int n ) { //���������ֵ�㷨�������棩
   int m = INT_MIN; //��ʼ�����ֵ��¼��O(1)
   for ( int i = 0; i < n; i++ ) //��ȫ����O(n)��Ԫ�أ���һ
      m = max( m, A[i] ); //�Ƚϲ����£�O(1)
   return m; //�������ֵ��O(1)
} //O(1) + O(n) * O(1) + O(1) = O(n + 2) = O(n)




