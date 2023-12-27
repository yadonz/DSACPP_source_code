double evaluate ( char* S, char* RPN ) { //�ԣ����޳��׿ո�ģ����ʽS��ֵ����ת��Ϊ�沨��ʽRPN
   Stack<double> opnd; Stack<char> optr; //������ջ�������ջ
   optr.push ( '&#92;0' ); //β�ڱ�'&#92;0'Ҳ��Ϊͷ�ڱ�������ջ
   while ( !optr.empty() ) { //�������ջ�ǿ�֮ǰ�����������ʽ�и��ַ�
      if ( isdigit ( *S ) ) { //����ǰ�ַ�Ϊ����������
         readNumber ( S, opnd ); append ( RPN, opnd.top() ); //��������������������RPNĩβ
      } else //����ǰ�ַ�Ϊ���������
         switch ( priority ( optr.top(), *S ) ) { //������ջ�������֮�����ȼ��ߵͷֱ���
            case '&#60;': //ջ����������ȼ�����ʱ
               optr.push ( *S ); S++; //�����Ƴ٣���ǰ�������ջ
               break;
            case '&#61;': //���ȼ���ȣ���ǰ�����Ϊ�����Ż���β���ڱ�'&#92;0'��ʱ
               optr.pop(); S++; //�����Ų�������һ���ַ�
               break;
            case '&#62;': { //ջ����������ȼ�����ʱ����ʵʩ��Ӧ�ļ��㣬�������������ջ
               char op = optr.pop(); append ( RPN, op ); //ջ���������ջ��������RPNĩβ
               if ( '&#33;' == op ) //������һԪ�����
                  opnd.push ( calcu ( op, opnd.pop() ) ); //��ȡһ������������������ջ
               else { //������������Ԫ�������
                  double opnd2 = opnd.pop(), opnd1 = opnd.pop(); //ȡ����ǰ������
                  opnd.push ( calcu ( opnd1, op, opnd2 ) ); //ʵʩ��Ԫ���㣬�����ջ
               }
               break;
            }
            default : exit ( -1 ); //���﷨���󣬲�������ֱ���˳�
         }//switch
   }//while
   return opnd.pop(); //�������������ļ�����
}




