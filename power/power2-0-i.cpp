__int64 power2BF_I ( int n ) { //�ݺ���2^n�㷨�����������棩��n >= 0
   __int64 pow = 1; //O(1)���ۻ�����ʼ��Ϊ2^0
   while ( 0 < n -- ) //O(n)������n�֣�ÿ�ֶ�
      pow <<= 1; //O(1)�����ۻ�������
   return pow; //O(1)�������ۻ���
} //O(n) = O(2^r)��rΪ����ָ��n�ı���λ��



