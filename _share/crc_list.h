#include "list/list.h"

template <typename T> void crc ( List<T> & L ) { //ͳ���б������������Ԫ���ܺͣ�
   T crc = 0; L.traverse ( Crc<T> ( crc ) ); //��crcΪ�����������б���
   printf ( "CRC =" ); print ( crc ); printf ( "\n" ); //���ͳ�Ƶõ�������
}




