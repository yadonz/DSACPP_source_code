void readNumber ( char*& p, Stack<double>& stk ) { //将起始于p的子串解析为数值，并存入操作数栈
   stk.push ( ( double ) ( *p - '0' ) ); //当前数位对应的数值进栈
   while ( isdigit ( * ( ++p ) ) ) //若有后续数字（多位整数），则
      stk.push ( stk.pop() * 10 + ( *p - '0' ) ); //追加之（可能上溢）
   if ( '&#46;' == *p ) { //若还有小数部分
      double fraction = 1; //则
      while ( isdigit ( * ( ++p ) ) ) //逐位
         stk.push ( stk.pop() + ( *p - '0' ) * ( fraction /= 10 ) ); //加入（可能下溢）
   }
}




