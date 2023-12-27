#include "_share/util.h"
#include "stack/stack.h" //ʹ��ջ
#include "Cell.h" //�Թ������

int labySize;
Cell* startCell;
Cell* goalCell;

#include "neighbor.h"
#include "advance.h"

#include "displayLaby.h"
#include "laby.h"

#include "randLaby.h"
#include "readLaby.h"

/******************************************************************************************
 * �Թ�Ѱ��
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   srand ( ( unsigned int ) time ( NULL ) ); //�����������
   ( 1 < argc ) ? readLaby ( argv[1] ) : randLaby(); //ʹ��ָ���Թ��ļ������������
   labyrinth ( laby, startCell, goalCell ) ? //�����㷨
   printf ( "\nRoute found\a\n" ) :
   printf ( "\nNo route found\a\n" );
   getchar();
   return 0;
}




