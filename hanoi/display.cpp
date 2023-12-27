#include "hanoi.h"

/******************************************************************************************
 * 输出栈S在高度i的分布
 ******************************************************************************************/
void display ( Stack<int>& S, Rank i ) {
   Rank diskR = ( i < S.size() ) ? S[i] : 0; //通过Vecotr[]接口，获取高度i处盘子的半径
   for ( Rank j = 0; j < nDisk - diskR; j++ )   printf ( " " );
   for ( Rank j = 0; j < diskR; j++ )    printf ( "=" );
   printf ( "|" );
   for ( Rank j = 0; j < diskR; j++ )    printf ( "=" );
   for ( Rank j = 0; j < nDisk - diskR; j++ )   printf ( " " );
}

/******************************************************************************************
 * 显示三个栈内容（使用全局变量）
 ******************************************************************************************/
void displayHanoi() {
   system ( "cls" );   printf ( "\n\n" );
   for ( int i = nDisk - 1; i >= 0; i-- ) //自顶向下，在每一高度层次，输出（至多）三个盘子
      { display ( Sx, i ); display ( Sy, i ); display ( Sz, i ); printf ( "\n" ); }
   for ( int j = 0; j < 3 * ( 2 * nDisk + 1 ); j++ )   printf ( "=" );   printf ( "\n" ); //显示地面
   getchar();
}




