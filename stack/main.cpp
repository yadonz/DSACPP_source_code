/******************************************************************************************
 * Test of stack
 ******************************************************************************************/
#include "stack_test.h"

int testID = 0; //测试编号

/******************************************************************************************
 * 测试栈
 ******************************************************************************************/
template <typename T> //元素类型
void testStack ( Rank n ) {
   Stack<T> S;
   printf ( "\n  ==== Test %2d. Growing stack\n", testID++ );
   while ( S.size() < n ) {
      if ( S.empty() || ( 30 < ( rand() % 100 ) ) ) { //70%概率入栈
         T e = (T) dice ( 2 * n );
         printf ( "pushing " ); print ( e ); printf ( " ...\n" );
         S.push ( e );
      } else { //30%概率出栈
         printf ( "popping with ... " ); print ( S.pop() ); printf ( "\n" );
      }
      print ( S );
   }
   printf ( "\n  ==== Test %2d. Shrinking stack\n", testID++ );
   while ( !S.empty() ) {
      if ( 70 < dice ( 100 ) ) { //70%概率入栈
         T e = (T) dice ( 2 * n );
         printf ( "pushing " ); print ( e ); printf ( " ...\n" );
         S.push ( e );
      } else { //70%概率出栈
         printf ( "popping with ... " ); print ( S.pop() ); printf ( "\n" );
      }
      print ( S );
   }
}


/******************************************************************************************
 * 测试栈
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   if ( 2 > argc ) { printf ( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
   srand((unsigned int)time(NULL)); //随机种子
   //srand( 31415926 ); //固定种子（假种子，调试用）
   testStack<int> ( atoi ( argv[1] ) ); //元素类型可以在这里任意选择
   return 0;
}




