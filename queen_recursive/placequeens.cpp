#include   "../queen_brute_force_1/queen.h"

/******************************************************************************************
 * n�ʺ��㷨���ݹ�棩
 * ��ʼ������placeQueens(nQueen, 0);
 ******************************************************************************************/
void placeQueens ( int nQueen, int k ) { //����n���ʺ��еĵ�k��������0��k-1���Ѿ�λ��
   static int solu[QUEEN_MAX]; //�ⷨ
   if ( nQueen <= k ) { //�����лʺ��Ѿ�λ����
      nSolu++; displaySolution ( solu, nQueen ); //������н�
   } else //����
      for ( int i = 0; i < nQueen; i++ ) { //����
         solu[k] = i; //���Ž���ǰ�ʺ���ڣ���ǰ�еģ�������
         if ( !collide ( solu, k ) ) //��û�г�ͻ����
            placeQueens ( nQueen, k + 1 ); //����������һ�ʺ�
      } //˼��������Ļ��ݣ�ͨ��ʲô����ʵ�֣�
}



