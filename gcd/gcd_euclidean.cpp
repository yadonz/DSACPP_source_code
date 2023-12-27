__int64 gcdEU_R ( __int64 a, __int64 b ) { //assert: 0 <= min(a, b)
   return ( 0 == b ) ? a : gcdEU_R ( b, a % b );
}

__int64 gcdEU ( __int64 a, __int64 b ) { //assert: 0 <= min(a, b)
   while ( true ) {
      if ( 0 == a ) return b;
      if ( 0 == b ) return a;
      if ( a > b ) a %= b;
      else       b %= a;
   }
}




