#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include "_share/util.h"
#include "UniPrint/print.h"
#include "vector/vector.h"
#include "majority.h"
#include "majorityCandidate.h"
#include "majorityCheck.h"

/******************************************************************************************
 * �����㷨����
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   if ( 2 > argc ) { printf ( "Usage: %s <n>\a\a\n", argv[0] ); return 1; }
   Rank n = atoi ( argv[1] );
   if ( n < 1 ) { printf ( "Invalid arguments\a\a\n" ); return 1; }
   srand ( ( unsigned int ) time ( NULL ) );
// �����������
   Vector<int> A; //������Ϊ��
   int maj = rand() % n; printf ( "%d is highly possible to be a majority\n", maj ); //���ȷ��һ��maj��ѡ
   while ( A.size() < n ) { //�������ϲ���n��ֱ������n��Ԫ��
      int ele = ( rand() % 100 < 50 ) ? maj : rand() % n; //49%�ĸ���ȷ����maj��51%�������ʵ�鲻ͬ���ʵ�Ч����
      A.insert ( A.size(), ele );
   }
   print ( A ); //�����������
// ��������
   majority ( A, maj ) ?
   printf ( "Majority element found as %d\n", maj ) :
   printf ( "Majority element NOT found\n" );
// ͨ�������һ����֤
   A.sort(); print ( A );
// ����
   return 0;
}




