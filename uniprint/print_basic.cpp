#include "print.h"

/******************************************************************************************
 * ��������
 ******************************************************************************************/
void UniPrint::p( int e ) { printf( " %04d", e ); }
void UniPrint::p( size_t e ) { p( (int)e ); } // Rank��0xFFFFFFFF�ڴ�ӡǰ��ת��Ϊ-1���Ա�۲�
void UniPrint::p( float e ) { printf( " %4.3f", e ); }
void UniPrint::p( double e ) { printf( " %4.3f", e ); }
void UniPrint::p( char e ) { printf( " &#37;c", ( 31 < e ) && ( e < 128 ) ? e : '$' ); }
void UniPrint::p( VStatus e ) {
   switch ( e ) {
      case UNDISCOVERED:   printf ( "U" ); break;
      case DISCOVERED:     printf ( "D" ); break;
      case VISITED:        printf ( "V" ); break;
      default:             printf ( "X" ); break;
   }
}
void UniPrint::p( EType e ) {
   switch ( e ) {
      case UNDETERMINED:   printf ( "U" ); break;
      case TREE:           printf ( "T" ); break;
      case CROSS:          printf ( "C" ); break;
      case BACKWARD:       printf ( "B" ); break;
      case FORWARD:        printf ( "F" ); break;
      default:             printf ( "X" ); break;
   }
}




