int match ( char* P, char* T ) { //Boyer-Morre�㷨����ȫ�棬���Bad Character��Good Suffix��
   int* bc = buildBC ( P ); int* gs = buildGS ( P ); //����BC���GS��
   size_t i = 0; //ģʽ��������ı�������ʼλ�ã���ʼʱ���ı�������룩
   while ( strlen ( T ) >= i + strlen ( P ) ) { //�������ƣ�������ܲ�ֹһ���ַ���ģʽ��
      int j = strlen ( P ) - 1; //��ģʽ����ĩβ���ַ���ʼ
      while ( P[j] == T[i + j] ) //��������ȶ�
         if ( 0 > --j ) break;
      if ( 0 > j ) //������ƥ���׺ == ����ģʽ����˵���Ѿ���ȫƥ�䣩
         break; //����ƥ��λ��
      else //�����ʵ����ƶ�ģʽ��
         i += max ( gs[j], j - bc[ T[i + j] ] ); //λ��������BC���GS��ѡ�����
   }
   delete [] gs; delete [] bc; //����GS���BC��
   return i;
}




