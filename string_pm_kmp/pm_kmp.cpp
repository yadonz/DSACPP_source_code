int match ( char* P, char* T ) {  //KMP�㷨
   int* next = buildNext ( P ); //����next��
   int n = ( int ) strlen ( T ), i = 0; //�ı���ָ��
   int m = ( int ) strlen ( P ), j = 0; //ģʽ��ָ��
   while ( j < m  && i < n ) //������������ȶ��ַ�
      if ( 0 > j || T[i] == P[j] ) //��ƥ�䣬��P���Ƴ�����ࣨ�����жϵĴ��򲻿ɽ�����
         { i ++;  j ++; } //��ת����һ�ַ�
      else //����
         j = next[j]; //ģʽ�����ƣ�ע�⣺�ı������û��ˣ�
   delete [] next; //�ͷ�next��
   return i - j;
}




