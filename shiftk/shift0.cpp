int shift0 ( int* A, int n, int k ) { //蛮力地将数组循环左移k位，O(nk)
   if ( k < 1 ) return 0; int mov = 0;
   while ( k-- ) { //反复以1为间隔循环左移，共迭代k次
      mov += shift ( A, n, 0, 1 );
   }
   return mov;
}




