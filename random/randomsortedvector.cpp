#include "UniPrint/print.h"
#include "vector/vector.h"

Vector<int> //���ɳ���Ϊn���������������Ԫ��ȡֵ����[min, max]
randomSortedVector ( Rank n, int min, int max ) { //ACP, Vol.2, Algorithm S
   Vector<int> A;
   for ( int i = min; i <= max; i++ )
      if ( rand() % ( max - i + 1 ) < (int)n )
         { A.insert ( i ); n--; }
   return A;
}




