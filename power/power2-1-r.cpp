inline __int64 sqr ( __int64 a ) { return a * a; } //ƽ������������ִ�У��ܿ�ͻ���ֵ�����
__int64 power2 ( int n ) { //�ݺ���2^n�㷨���Ż��ݹ�棩��n >= 0
   if ( 0 == n ) return 1; //�ݹ����������n����ż�ֱ�ݹ�
   return ( n & 1 ) ? sqr ( power2 ( n >> 1 ) ) << 1 : sqr ( power2 ( n >> 1 ) );
} //O(logn) = O(r)��rΪ����ָ��n�ı���λ��




