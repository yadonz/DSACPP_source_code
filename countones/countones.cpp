int countOnes ( unsigned int n ) { //ͳ������������չ������λ1��������O(logn)
   int ones = 0; //��������λ
   while ( 0 < n ) { //��n������0֮ǰ��������
      ones += ( 1 & n ); //������λ����Ϊ1�����
      n >>= 1; //����һλ
   }
   return ones; //���ؼ���
} //��Ч��glibc�����ú���int __builtin_popcount (unsigned int n)



