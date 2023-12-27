#include <cstdio>
#include "_share/rand.h"
#include "Bitmap/Bitmap.h"
#include "Eratosthenes.h"
#include "primeNLT.h"

/******************************************************************************************
 * ������
 ******************************************************************************************/
#define PRIMEFILE "prime-bitmap.txt" //���ڼ�¼ָ�������������ֲ��ı���ͼ�ļ�
int main ( int argc, char* argv[] ) {
   if ( 2 > argc ) { printf ( "Usage: %s <maxInt>\n", argv[0] ); return -1; }
   srand((unsigned int)time(NULL)); //�������
   //srand( 31415926 ); //�̶����ӣ������ӣ������ã�
   int n = atoi( argv[1] ); //������������Ƿ��������
   Eratosthenes( n, PRIMEFILE );
   for ( int i = 0; i <= 13; i++ ) { //��13��������ԣ�����MAX_RAND�����Ƿ�Χ������0x7FFF��
      int low = dice( n );
      printf( "The smallest prime number no less than %8d (%05X) is %8d\n", low, low,
              primeNLT( low, n, PRIMEFILE ) );
   }
   for ( int i = 0; i < 13; i++ ) { //��13�εȼ�����
      printf( "The smallest prime number no less than %8d (%05X) is %8d\n", n * i / 11,
              n * i / 11, primeNLT( n * i / 11, n, PRIMEFILE ) );
   }
   return 0;
}



