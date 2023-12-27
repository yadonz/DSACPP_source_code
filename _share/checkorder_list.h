#include "list/list.h"

template <typename T> void checkOrder( List<T>& L ) { //�ж��б��Ƿ���������
   int nInv = 0; //���������
   L.traverse( CheckOrder<T>( nInv, L.first()->data ) ); //���б���
   if ( 0 < nInv )
      printf( "Unsorted with %d adjacent inversion(s)\n", nInv );
   else
      printf( "Sorted\n" );
}




