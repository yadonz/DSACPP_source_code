Rank primeNLT( Rank c, Rank n, char* file ) { //����file�ļ��еļ�¼����[c, n)��ȡ��С������
   Bitmap B( file, n ); // file�Ѿ���λͼ��ʽ��¼��n���ڵ��������������ֻҪ
   while ( c < n ) //��c��ʼ����λ��
      if ( B.test( c ) ) c++; //���ԣ�����
      else return c; //�����׸����ֵ�����
   return c; //��û������������������n��ʵ���в�����˼򻯴���
}




