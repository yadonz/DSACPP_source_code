/******************************************************************************************
 * Test of PQ_ComplHeap & PQ_LeftHeap
 ******************************************************************************************/
#include "PQ_test.h"
//#include <windows.h>

/******************************************************************************************
 * 针对基于列表、向量以及左式堆实现的优先级队列，做过程统一的测试
 ******************************************************************************************/
template <typename PQ, typename T> void testHeap( Rank n ) {
   Rank s = 2*n/3; T* A = new T[s]; //创建容量为2*n/3的数组，且
   for ( T i = 0; i < 2 * (T)n / 3; i++ ) A[i] = dice( ( T ) 3 * n ); //所有词条随机
   PQ heap( A + n / 6, n / 3 ); //批量建堆（PQ_ComplHeap实现了Robert Floyd算法）
   delete [] A;
   while ( heap.size() < n ) { //随机测试
      if ( dice( 100 ) < 70 ) { //70%概率插入新词条
         T e = dice( ( T ) 3 * n );
         heap.insert( e );
      } else { //30%概率摘除最大词条
         if ( !heap.empty() ) {
            T e = heap.delMax();
         }
      }
   }
   while ( !heap.empty() ) { //清空
      T e = heap.delMax();
   }
}

/******************************************************************************************
 * 优先级队列测试
 ******************************************************************************************/
int main( int argc, char* argv[] ) {
   if ( 2 > argc ) { printf( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
   srand((unsigned int)time(NULL)); //随机种子
   //srand( 31415926 ); //固定种子（假种子，调试用）
#if defined(DSA_PQ_LEFTHEAP)
   testHeap<PQ_LeftHeap<int>, int>( atoi ( argv[1] ) ); //词条类型可以在这里任意选择
#elif defined(DSA_PQ_COMPLHEAP)
   testHeap<PQ_ComplHeap<int>, int>( atoi ( argv[1] ) ); //词条类型可以在这里任意选择
#elif defined(DSA_PQ_LIST)
   testHeap<PQ_List<int>, int>( atoi ( argv[1] ) ); //词条类型可以在这里任意选择
#else
   printf( "PQ type not defined yet\n" );
#endif
   return 0;
}




