#include "queen_brute_force_1/queen.h"

void place3Queens() { //3�ʺ��֦�㷨
   int solu[3]; //�ⷨ
   for ( solu[0] = 0; solu[0] < 3; solu[0]++ )
      if ( !collide ( solu, 0 ) )
         for ( solu[1] = 0; solu[1] < 3; solu[1]++ )
            if ( !collide ( solu, 1 ) )
               for ( solu[2] = 0; solu[2] < 3; solu[2]++ )
                  if ( !collide ( solu, 2 ) ) {
                     nSolu++; displaySolution ( solu, 3 );
                  }
}




