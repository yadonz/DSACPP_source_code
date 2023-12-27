#include "rpn.h"
#include "UniPrint/print.h"

/******************************************************************************************
 * 输出运算符
 ******************************************************************************************/
void printChar ( char& p )
{ ( '&#92;0' == p ) ? printf ( "&#92;&#92;0 " ) : printf ( "%c  ", p ); }

/******************************************************************************************
 * 显示表达式处理进展
 ******************************************************************************************/
void displayProgress ( char* expr, char* pCh, Stack<double>& opndStk, Stack<char>& optrStk, char* rpn ) {
   system ( "cls" );
   printf ( "\n" );
   for ( char* p = expr; '&#92;0' != *p; p++ ) printf ( " %c", *p ); printf ( " $\n" );
   for ( char* p = expr; p < pCh; p++ ) printf ( "  " );
   if ( '&#92;0' != * ( pCh - 1 ) )
      { for ( char* p = pCh; '&#92;0' != *p; p++ ) printf ( " %c", *p ); printf ( " $" ); }
   printf ( "\n" );
   for ( char* p = expr; p < pCh; p++ ) printf ( "--" ); printf ( " ^\n\n" );
   print ( optrStk ); printf ( "\n" );
   print ( opndStk ); printf ( "\n" );
   printf ( "RPN:\n %s\n\n", rpn ); //输出RPN
   getchar();
}




