void readNumber ( char*& p, Stack<double>& stk ) { //����ʼ��p���Ӵ�����Ϊ��ֵ�������������ջ
   stk.push ( ( double ) ( *p - '0' ) ); //��ǰ��λ��Ӧ����ֵ��ջ
   while ( isdigit ( * ( ++p ) ) ) //���к������֣���λ����������
      stk.push ( stk.pop() * 10 + ( *p - '0' ) ); //׷��֮���������磩
   if ( '&#46;' == *p ) { //������С������
      double fraction = 1; //��
      while ( isdigit ( * ( ++p ) ) ) //��λ
         stk.push ( stk.pop() + ( *p - '0' ) * ( fraction /= 10 ) ); //���루�������磩
   }
}




