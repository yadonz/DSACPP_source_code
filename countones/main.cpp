#include "_share/util.h"
int countOnes ( unsigned int n );
int countOnes1 ( unsigned int n );
int countOnes2 ( unsigned int n );

void  main ( int argc, char* argv[] ) { //��������λ1�����㷨�������
   for ( unsigned int i = 0; i < INT_MAX; i++ )
      printf ( "%6d = %4X: %6d %6d %6d\n", i, i, countOnes ( i ), countOnes1 ( i ), countOnes2 ( i ) );
}




