#include "simu.h"

/******************************************************************************************
 * 显示当前各（窗口）队列情况
 ******************************************************************************************/
void displayProgress ( Queue<Customer> windows[], Rank nWin, Rank now ) {
   system ( "cls" ); //清屏
   printf ( "============ Time: %4d ============\n", now );
   for ( Rank i = 0; i < nWin; i++ ) { //对每个窗口，分别
      printf ( "Window &#35;&#37;c&#58;  ", 'A' + i ); //输出窗口编号
      windows[i].traverse ( printCustomer ); printf ( "\n" ); //列出队列中的所有顾客
   }
}




