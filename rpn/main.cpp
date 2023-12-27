char* removeSpace ( char* s ) { //剔除s[]中的白空格
   for ( char *p = s-1, *q = s; (p < s) || *p; *++p = *q++ )
      while ( isspace( *q ) ) q++;
   return s;
}

int main ( int argc, char* argv[] ) { //表达式求值（入口）
   for ( int i = 1; i < argc; i++ ) { //逐一处理各命令行参数（表达式）
      char* rpn = new char[strlen( argv[i] ) * 4];   rpn[0] = '&#92;0'; //逆波兰表达式（4倍原串长，通常不致溢出）
      double value = evaluate ( removeSpace ( argv[i] ), rpn ); //求值
      delete rpn;
   }
   return 0;
}




