/******************************************************************************************
 * Test of PQ_ComplHeap & PQ_LeftHeap
 ******************************************************************************************/
#include "PQ_test.h"
//#include <windows.h>

/******************************************************************************************
 * ��Ի����б������Լ���ʽ��ʵ�ֵ����ȼ����У�������ͳһ�Ĳ���
 ******************************************************************************************/
template <typename PQ, typename T> void testHeap( Rank n ) {
   Rank s = 2*n/3; T* A = new T[s]; //��������Ϊ2*n/3�����飬��
   for ( T i = 0; i < 2 * (T)n / 3; i++ ) A[i] = dice( ( T ) 3 * n ); //���д������
   PQ heap( A + n / 6, n / 3 ); //�������ѣ�PQ_ComplHeapʵ����Robert Floyd�㷨��
   delete [] A;
   while ( heap.size() < n ) { //�������
      if ( dice( 100 ) < 70 ) { //70%���ʲ����´���
         T e = dice( ( T ) 3 * n );
         heap.insert( e );
      } else { //30%����ժ��������
         if ( !heap.empty() ) {
            T e = heap.delMax();
         }
      }
   }
   while ( !heap.empty() ) { //���
      T e = heap.delMax();
   }
}

/******************************************************************************************
 * ���ȼ����в���
 ******************************************************************************************/
int main( int argc, char* argv[] ) {
   if ( 2 > argc ) { printf( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
   srand((unsigned int)time(NULL)); //�������
   //srand( 31415926 ); //�̶����ӣ������ӣ������ã�
#if defined(DSA_PQ_LEFTHEAP)
   testHeap<PQ_LeftHeap<int>, int>( atoi ( argv[1] ) ); //�������Ϳ�������������ѡ��
#elif defined(DSA_PQ_COMPLHEAP)
   testHeap<PQ_ComplHeap<int>, int>( atoi ( argv[1] ) ); //�������Ϳ�������������ѡ��
#elif defined(DSA_PQ_LIST)
   testHeap<PQ_List<int>, int>( atoi ( argv[1] ) ); //�������Ϳ�������������ѡ��
#else
   printf( "PQ type not defined yet\n" );
#endif
   return 0;
}




