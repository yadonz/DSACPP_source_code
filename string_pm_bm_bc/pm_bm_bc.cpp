int match ( char* P, char* T ) { //Boyer-Morre�㷨(�򻯰棬ֻ����Bad Character Shift)
   int* bc = buildBC ( P ); //Ԥ����
   size_t n = strlen ( T ), i = 0; //�ı������ȡ���ģʽ�����ַ��Ķ���λ��
   size_t m = strlen ( P ); //ģʽ������
   while ( n >= i + m ) { //�ڵ������Ҷ�ǰ����������ģʽ�������ܲ�ֹһ���ַ���
      int j = m - 1; //��ģʽ����ĩβ���ַ���ʼ
      while ( P[j] == T[i+j] ) //��������ȶ�
         if ( 0 > --j ) break;
      if ( j < 0 ) //������ƥ���׺ == ����ģʽ������˵���Ѿ���ȫƥ�䣬��
         break; //����ƥ��λ��
      else //���򣬸���BC��
         i += max ( 1, j - bc[T[i+j]] ); //��Ӧ���ƶ�ģʽ����ʹ��T[i+j]��P[bc[T[i+j]]]����
   }
   delete [] bc; //����BC��
   return i;
}




