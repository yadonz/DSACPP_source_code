__int64 power2BF ( int n ) { //�ݺ���2^n�㷨�������ݹ�棩��n >= 0
   return ( 1 > n ) ? 1 : power2BF ( n - 1 ) << 1; //�ݹ�
} //O(n) = O(2^r)��rΪ����ָ��n�ı���λ��




