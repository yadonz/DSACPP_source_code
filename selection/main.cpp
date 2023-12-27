#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "_share/util.h"
#include "UniPrint/print.h"
#include "vector/vector.h"
#include "quickSelect.h"

int main( int argc, char* argv[] ) { //���ڿ��ٻ��ֵ�kѡȡ�㷨����
   if ( 2 > argc ) { printf ( "Usage: %s <n>\a\a\n", argv[0] ); return 1; }
   Rank n = atoi( argv[1] );
   if ( n < 1 ) { printf ( "Invalid arguments\a\a\n" ); return 1; }
   srand((unsigned int)time(NULL)); //�������
   //srand( 31415926 ); //�̶����ӣ������ӣ������ã�
   for ( Rank k = 0; k < n; k++ ) {
      Vector<int> A;
      while ( A.size() < n ) // create a random vector
         A.insert( rand() % n );
      quickSelect( A, k ); // find k-th element
      Vector<int> B( A ); B.sort(); //compared with the sorted copy
      printf( ( A[k] == B[k] ) ? " k =%4d OK\n" : " k =%4d Failed\n\n\n", k );
   }
   return 0;
}




