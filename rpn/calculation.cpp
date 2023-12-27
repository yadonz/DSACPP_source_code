double calcu ( char op, double b ) { //执行一元运算
   switch ( op ) {
      case '&#33;' : return ( double ) facI ( ( int ) b ); //目前仅有阶乘，可照此方式添加
      default  : exit ( -1 );
   }
}




