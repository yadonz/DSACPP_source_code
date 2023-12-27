#include "vector/vector.h"

template <typename T> void crc ( Vector<T> & V ) { //统计向量的特征（所有元素之和）
   T crc = 0; V.traverse ( Crc<T> ( crc ) ); //以crc为基本操作进行遍历
   printf ( "CRC =" ); print ( crc ); printf ( "\n" ); //输出统计得到的特征
}




