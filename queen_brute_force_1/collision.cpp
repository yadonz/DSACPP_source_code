#include "queen.h"

bool collide ( int* solu, int k ) { //�ж��Ƿ�����ڵ�ǰ�еĵ�k�з�����һ�ʺ�
   nCheck++;
   for ( int i = 0; i < k; i++ ) {
      if ( solu[k] == solu[i] )       return true; //��
      if ( solu[k] - solu[i] == k - i ) return true; //�Խ���
      if ( solu[k] - solu[i] == i - k ) return true; //���Խ���
   }
   return false;
}




