Rank primeNLT( Rank c, Rank n, char* file ) { //根据file文件中的记录，在[c, n)内取最小的素数
   Bitmap B( file, n ); // file已经按位图格式记录了n以内的所有素数，因此只要
   while ( c < n ) //从c开始，逐位地
      if ( B.test( c ) ) c++; //测试，即可
      else return c; //返回首个发现的素数
   return c; //若没有这样的素数，返回n（实用中不能如此简化处理）
}




