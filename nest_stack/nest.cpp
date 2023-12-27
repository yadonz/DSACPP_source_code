bool paren ( const char exp[], Rank lo, Rank hi ) { //���ʽ����ƥ���飬�ɼ����������
   Stack<char> S; //ʹ��ջ��¼�ѷ��ֵ���δƥ���������
   for ( Rank i = lo; i <= hi; i++ ) /* ��һ��鵱ǰ�ַ� */
      switch ( exp[i] ) { //������ֱ�ӽ�ջ������������ջ��ʧ�䣬����ʽ�ز�ƥ��
         case '&#40;': case '&#91;': case '&#123;': S.push ( exp[i] ); break;
         case '&#41;': if ( ( S.empty() ) || ( '&#40;' != S.pop() ) ) return false; break;
         case '&#93;': if ( ( S.empty() ) || ( '&#91;' != S.pop() ) ) return false; break;
         case '&#125;': if ( ( S.empty() ) || ( '&#123;' != S.pop() ) ) return false; break;
         default: break; //�������ַ�һ�ɺ���
   }
   return S.empty(); //����ջ�գ����ҽ���ƥ��
}




