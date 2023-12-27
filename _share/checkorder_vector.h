#include "vector/vector.h"

template <typename T> void checkOrder ( Vector<T> & V ) { //�ж������Ƿ���������
   int unsorted = 0; //���������
   V.traverse ( CheckOrder<T> ( unsorted, V[0] ) ); //���б���
   if ( 0 < unsorted )
      printf ( "Unsorted with %d adjacent inversion(s)\n", unsorted );
   else
      printf ( "Sorted\n" );
}




