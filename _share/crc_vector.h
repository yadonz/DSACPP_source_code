#include "vector/vector.h"

template <typename T> void crc ( Vector<T> & V ) { //ͳ������������������Ԫ��֮�ͣ�
   T crc = 0; V.traverse ( Crc<T> ( crc ) ); //��crcΪ�����������б���
   printf ( "CRC =" ); print ( crc ); printf ( "\n" ); //���ͳ�Ƶõ�������
}




