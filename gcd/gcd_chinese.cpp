__int64 gcdCN ( __int64 a, __int64 b ) { //assert: 0 < min(a, b)
   int r = 0; //a��b��2^r��ʽ�Ĺ�����
   while ( ! ( ( a & 1 ) || ( b & 1 ) ) ) { //��a��b����ż��
      a >>= 1; b >>= 1; r ++; //��ͬʱ��2�����ƣ������ۼ���r
   } //���£�a��b������һΪż
   while ( 1 ) {
      while ( ! ( a & 1 ) ) a >>= 1; //��aż��b�棩�����޳�a����������2
      while ( ! ( b & 1 ) ) b >>= 1; //��bż��a�棩�����޳�b����������2
      ( a > b ) ? a = a - b : b = b - a; //��Ϊ��gcd(max(a, b) - min(a, b), min(a, b))
      if ( 0 == a ) return b << r; //����ƽ�������gcd(0, b) = b
      if ( 0 == b ) return a << r; //����ƽ�������gcd(a, 0) = a
   }
}



