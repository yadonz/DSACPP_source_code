__int64 fib ( int n, __int64& prev ) { //����Fibonacci���е�n����Եݹ�棩�������ʽfib(n, prev)
   if ( 0 == n ) //������ݹ������
      { prev = 1; return 0; } //ֱ��ȡֵ��fib(-1) = 1, fib(0) = 0
   else { //����
      __int64 prevPrev; prev = fib ( n - 1, prevPrev ); //�ݹ����ǰ����
      return prevPrev + prev; //��ͼ�Ϊ����
   }
} //�ø���������¼ǰһ��������еĵ�ǰ�O(n)



