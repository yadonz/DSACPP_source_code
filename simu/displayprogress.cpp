#include "simu.h"

/******************************************************************************************
 * ��ʾ��ǰ�������ڣ��������
 ******************************************************************************************/
void displayProgress ( Queue<Customer> windows[], Rank nWin, Rank now ) {
   system ( "cls" ); //����
   printf ( "============ Time: %4d ============\n", now );
   for ( Rank i = 0; i < nWin; i++ ) { //��ÿ�����ڣ��ֱ�
      printf ( "Window &#35;&#37;c&#58;  ", 'A' + i ); //������ڱ��
      windows[i].traverse ( printCustomer ); printf ( "\n" ); //�г������е����й˿�
   }
}




