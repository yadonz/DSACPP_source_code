int* buildNext ( char* P ) { //����ģʽ��P��next���Ľ��汾��
   size_t m = strlen ( P ), j = 0; //��������ָ��
   int* next = new int[m]; int t = next[0] = -1; //next�������Ϊ-1
   while ( j < m - 1 )
      if ( 0 <= t && P[t] != P[j] ) //ʧ��
         t = next[t]; //����������һֵ�ó��Ե�λ��
      else //ƥ��
         if ( P[++t] != P[++j] ) //���������ж�
            next[j] = t; //Ψ���µ�һ���ַ�Ҳƥ��ʱ������ԭ������ֵ
         else
            next[j] = next[t]; //���򣬸���next[t]����ʱ���У�P[next[t]] != P[t] == P[j]��
   return next;
}




