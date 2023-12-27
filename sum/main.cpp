#include <ctime>
#include <iostream>
using namespace std;
#include "random/shuffle.h"
#include "UniPrint/print_int_array.h"
#include "reverse/reverse.h"
#include "sum/sum.h"

/******************************************************************************************
 * ����SUM
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   int n = ( 1 < argc ) ? atoi ( argv[1] ) : 7; //ToDo: validate n
   int* A = ( int* ) malloc ( n * sizeof ( int ) ); //ToDo: check NULL != A
   srand ( ( unsigned int ) time ( NULL ) );
// ˳��
   for ( int i = 0; i < n; i++ ) A[i] = i; print ( A, n );
   printf ( "SumI  = %d\n", sumI ( A, n ) );
   printf ( "SumR1 = %d\n", sum ( A, n ) );
   printf ( "SumR2 = %d\n\n", sum ( A, 0, n ) );
// �������
   shuffle ( A, n ); print ( A, n );
   printf ( "SumI  = %d\n", sumI ( A, n ) );
   printf ( "SumR1 = %d\n", sum ( A, n ) );
   printf ( "SumR2 = %d\n\n", sum ( A, 0, n ) );
// ǰ��ߵ�
   reverse ( A, n ); print ( A, n );
   printf ( "SumI  = %d\n", sumI ( A, n ) );
   printf ( "SumR1 = %d\n", sum ( A, n ) );
   printf ( "SumR2 = %d\n\n", sum ( A, 0, n ) );
//
   free ( A );
   printf ( "Test done.\a\n" );
   return 0;
}




