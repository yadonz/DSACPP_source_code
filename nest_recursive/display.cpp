#include "nest_stack/nest.h"

/******************************************************************************************
 * ��ʾ���ʽƬ��exp[lo, hi]����ԭ���ʽ����
 ******************************************************************************************/
void displaySubstring ( const char exp[], Rank lo, Rank hi ) {
   for ( Rank i = 0; i < lo; i++ ) printf ( " " );
   for ( Rank i = lo; i <= hi; i++ ) printf ( "%c", exp[i] );
   printf ( "\n" );
}

/******************************************************************************************
 * ��ʾ���ʽɨ�����
 ******************************************************************************************/
void displayProgress ( const char exp[], Rank i, Stack<char> S ) {
// ���ʽ
   system ( "cls" );
   printf ( "\n%s\n", exp );
   for ( Rank j = 0; j < i; j++ )   printf ( "-" );
   printf ( "^\n\n\n" );
// ջ
   print ( S ); getchar();
}




