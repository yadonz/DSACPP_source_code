int* buildNext ( char* P ) { //����ģʽ��P��next��
   size_t m = strlen ( P ), j = 0; //��������ָ��
   int* next = new int[m]; int t = next[0] = -1; //next�������Ϊ-1
   while ( j < m - 1 )
      if ( 0 > t || P[t] == P[j] ) { //ƥ��
         ++t; ++j; next[j] = t; //�������ֵ���˴��ɸĽ�...
      } else //����
         t = next[t]; //����������һֵ�ó��Ե�λ��
   return next;
}




