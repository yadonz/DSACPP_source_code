char* removeSpace ( char* s ) { //�޳�s[]�еİ׿ո�
   for ( char *p = s-1, *q = s; (p < s) || *p; *++p = *q++ )
      while ( isspace( *q ) ) q++;
   return s;
}

int main ( int argc, char* argv[] ) { //���ʽ��ֵ����ڣ�
   for ( int i = 1; i < argc; i++ ) { //��һ����������в��������ʽ��
      char* rpn = new char[strlen( argv[i] ) * 4];   rpn[0] = '&#92;0'; //�沨�����ʽ��4��ԭ������ͨ�����������
      double value = evaluate ( removeSpace ( argv[i] ), rpn ); //��ֵ
      delete rpn;
   }
   return 0;
}




