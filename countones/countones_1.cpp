int countOnes1 ( unsigned int n ) { //ͳ������������չ������λ1��������O(ones)��������λ1������
   int ones = 0; //��������λ
   while ( 0 < n ) { //��n������0֮ǰ��������
      ones++; //������������һλΪ1��
      n &= n - 1; //�����ǰ��ҵ�1
   }
   return ones; //���ؼ���
} //��Ч��glibc�����ú���int __builtin_popcount (unsigned int n)




