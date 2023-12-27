Operator optr2rank ( char op ) { //由运算符转译出编号
   switch ( op ) {
      case '&#43;' : return ADD; //加
      case '&#45;' : return SUB; //减
      case '&#42;' : return MUL; //乘
      case '&#47;' : return DIV; //除
      case '&#94;' : return POW; //乘方
      case '&#33;' : return FAC; //阶乘
      case '&#40;' : return L_P; //左括号
      case '&#41;' : return R_P; //右括号
      case '&#92;0': return EOE; //起始符与终止符
      default  : exit ( -1 ); //未知运算符
   }
}

char priority ( char op1, char op2 ) //比较两个运算符之间的优先级
{ return pri[optr2rank ( op1 ) ][optr2rank ( op2 ) ]; }




