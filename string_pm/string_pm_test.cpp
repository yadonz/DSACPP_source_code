#include "string_pm_test.h"

/******************************************************************************************
 * ��ʾNext[]��������ʾ����
 ******************************************************************************************/
void printNext ( int* N, int offset, int length ) {
   for ( int i = 0; i < length; i++ ) printf ( "%4d", i ); printf ( "\n" );
   for ( int i = 0; i < offset; i++ ) printf ( "    " );
   for ( int i = 0; i < length; i++ ) printf ( "%4d", N[i] ); printf ( "\n\n" );
}

/******************************************************************************************
 * ��ʾbc[]��������ʾ����
 ******************************************************************************************/
void printBC ( int* bc ) {
   printf ( "\n-- bc[] Table ---------------\n" );
   for ( size_t j = 0; j < 256; j++ ) if ( 0 <= bc[j] ) printf ( "%4c", ( char ) j ); printf ( "\n" );
   for ( size_t j = 0; j < 256; j++ ) if ( 0 <= bc[j] ) printf ( "%4d", bc[j] ); printf ( "\n\n" );
}

/******************************************************************************************
 * ��ʾGS[]��������ʾ����
 ******************************************************************************************/
void printGS ( char* P, int* GS ) {
   printf ( "-- gs[] Table ---------------\n" );
   for ( size_t m = strlen ( P ), j = 0; j < m; j++ ) printf ( "%4d", j ); printf ( "\n" );
   printString ( P ); printf ( "\n" );
   for ( size_t m = strlen ( P ), j = 0; j < m; j++ ) printf ( "%4d", GS[j] ); printf ( "\n\n" );
}

/******************************************************************************************
 * Text     :  0   1   2   .   .   .   i   i+1 .   .   .   i+j .   .   n-1
 *             ------------------------|-------------------|------------
 * Pattern  :                          0   1   .   .   .   j   .   .
 *                                     |-------------------|
 ******************************************************************************************
 * ��̬��ʾƥ���չ
 * iΪP�����T����ʼλ�ã�jΪP�ĵ�ǰ�ַ�
 ******************************************************************************************/
void showProgress ( char* T, char* P, int i, int j ) {
}

int match ( char*, char* );

/******************************************************************************************
 * ��ƥ���㷨ͳһ����
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   if ( 3 > argc ) { fprintf ( stderr, "\nUsage: %s <Pattern> <Text>\n\nFor example %s people &#92;&#34;now is the time for all good people to come&#92;&#34;\n\n", argv[0], argv[0] ); return -1; }
   for ( int i = 0; i < ( argc - 1 ) / 2 * 2; i += 2 ) {
      int pos = match ( argv[i+1], argv[i+2] );
   }
   return 0;
}



