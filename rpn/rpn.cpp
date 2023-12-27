double evaluate ( char* S, char* RPN ) { //对（已剔除白空格的）表达式S求值，并转换为逆波兰式RPN
   Stack<double> opnd; Stack<char> optr; //运算数栈、运算符栈
   optr.push ( '&#92;0' ); //尾哨兵'&#92;0'也作为头哨兵首先入栈
   while ( !optr.empty() ) { //在运算符栈非空之前，逐个处理表达式中各字符
      if ( isdigit ( *S ) ) { //若当前字符为操作数，则
         readNumber ( S, opnd ); append ( RPN, opnd.top() ); //读入操作数，并将其接至RPN末尾
      } else //若当前字符为运算符，则
         switch ( priority ( optr.top(), *S ) ) { //视其与栈顶运算符之间优先级高低分别处理
            case '&#60;': //栈顶运算符优先级更低时
               optr.push ( *S ); S++; //计算推迟，当前运算符进栈
               break;
            case '&#61;': //优先级相等（当前运算符为右括号或者尾部哨兵'&#92;0'）时
               optr.pop(); S++; //脱括号并接收下一个字符
               break;
            case '&#62;': { //栈顶运算符优先级更高时，可实施相应的计算，并将结果重新入栈
               char op = optr.pop(); append ( RPN, op ); //栈顶运算符出栈并续接至RPN末尾
               if ( '&#33;' == op ) //若属于一元运算符
                  opnd.push ( calcu ( op, opnd.pop() ) ); //则取一个操作数，计算结果入栈
               else { //对于其它（二元）运算符
                  double opnd2 = opnd.pop(), opnd1 = opnd.pop(); //取出后、前操作数
                  opnd.push ( calcu ( opnd1, op, opnd2 ) ); //实施二元计算，结果入栈
               }
               break;
            }
            default : exit ( -1 ); //逢语法错误，不做处理直接退出
         }//switch
   }//while
   return opnd.pop(); //弹出并返回最后的计算结果
}




