/******************************************************************************************
 * Test of DEPQ
 ******************************************************************************************/
#include "DEPQ_test.h"
#include <windows.h>

/******************************************************************************************
 * ��Ի����б������Լ���ʽ��ʵ�ֵ����ȼ����У�������ͳһ�Ĳ���
 ******************************************************************************************/
void verifySMMH( SMMH<int> H ) {
   Rank s = H.size(); Rank k = 0;
   while ( ++k < s ) {
      if ( isLC(k) && sib(k) < s  &&  H[k] > H[sib(k)] ) break; //Property #0
      if ( isLC(k) && lc(k) < s && H[k] > H[lc(k)] ) break; //Property #1
      if ( isLC(k) && ln(k) < s && H[k] > H[ln(k)] ) break;
      if ( isRC(k) && rc(k) < s && H[k] < H[rc(k)] ) break; //Property #2
      if ( isRC(k) && rn(k) < s && H[k] < H[rn(k)] ) break;
   }
   if ( k < s ) { print(H); printf("SMMP invalid at H[%d] = %d\n", k, H[k]); exit(-1); }
}

void testSMMH( Rank n ) {
   SMMH<int> H; //init an empty DEPQ implemented as an SMMH
   while ( H.size() < n ) { //�������
      if ( dice ( 100 ) < 70 ) { //insert with a prob. of 70%
         int e = dice ( 7 * n );
         H.insert ( e );
      } else { //delMin or delMax with a prob. of 15% resp.
         if ( 1 < H.size() )
            if ( dice( 100 ) < 50 ) {
               int e = H.delMin();
            } else {
               int e = H.delMax();
            }
      }
      verifySMMH( H );
   }
   while ( 1 < H.size() ) { //delMin or delMax with a prob. of 50% resp.
      if ( dice( 100 ) < 50 ) {
         int e = H.delMin();
      } else {
         int e = H.delMax();
      }
      verifySMMH( H );
      if ( H.size() < 16 ) { print(H); printf("\n"); }
   }
}

/******************************************************************************************
 * ���ȼ����в���
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   if ( 2 > argc ) { printf ( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
   srand((unsigned int)time(NULL)); //�������
   //srand( 31415926 ); //�̶����ӣ������ӣ������ã�
#if defined(DSA_DEPQ_SMMH)
   testSMMH( atoi ( argv[1] ) ); //�������Ϳ��ڴ�ָ��
#else
   printf ( "PQ type not defined yet\n" );
#endif
   return 0;
}




