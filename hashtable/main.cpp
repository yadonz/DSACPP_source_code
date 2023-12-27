/******************************************************************************************
 * Test of Hashtable
 ******************************************************************************************/
#include "Hashtable_test.h"

/******************************************************************************************
 * 测试散列表
 ******************************************************************************************/
template <typename K, typename V> //key、value
void testHashtable ( Rank n ) {
   Hashtable<K, V> ht ( n ); print ( ht );
   while ( ht.size() < 4 * n ) {
      printf ( "\n" );
      switch ( dice ( 3 ) ) {
         case 0: { //查找，成功率 <= 33.3%
            K key = dice ( ( K ) n * 12 ); //[0, 3n)范围内的key
            printf( "Searching " ); print ( key ); printf( "(%04d) :\n", hashCode( key ) );
            V* pValue = ht.get ( key );
            pValue ? printf( "Found with " ), print( *pValue ) : printf( "Not found" ); printf( "\n" );
            break;
         }
         case 1: { //删除，成功率 <= 33.3%
            K key = dice ( ( K ) n * 12 ); //[0, 3n)范围内的key
            printf( "Removing " ); print ( key ); printf( "(%04d) :\n", hashCode( key ) );
            ht.remove( key ) ? printf( "Done\n" ), print( ht ) : printf( "Entry not exists\n" );
            break;
         }
         default: {//插入，成功率 == 100%
            K key = dice ( ( K ) n * 12 ); V v = ( V ) 'A' + dice ( 26 ); //在[0, 2n)*['A'~'Z']范围内的词条
            printf( "Inserting <" ); print( key ); printf( "(%04d)", hashCode( key ) ); printf( " :" ); print ( v ); printf( " >\n" );
            ht.put( key, v ) ? printf( "Done\n" ), print( ht ) : printf( "Dup key\n" );
            break;
         }
      } //switch
   } //while
   while ( ht.size() > 0 ) {
      printf( "\n" );
      K key = dice( ( K ) n * 12 ); //[0, 3n)范围内的key
      printf( "Removing " ); print( key ); printf( " :\n" );
      ht.remove( key ) ? printf( "Done\n" ), print( ht ) : printf( "Entry not exists\n" );
   }
}

/******************************************************************************************
 * 主程序
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   if ( 2 > argc ) { printf ( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
   srand((unsigned int)time(NULL)); //随机种子
   //srand( 31415926 ); //固定种子（假种子，调试用）
   testHashtable<int, char>( atoi( argv[1] ) ); //元素类型可以在这里任意选择
   return 0;
}




