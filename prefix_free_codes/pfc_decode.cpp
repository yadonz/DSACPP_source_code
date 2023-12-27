void decode ( PFCTree* tree, Bitmap& code, int n ) { //PFC解码算法
   BinNodePosi<char> x = tree->root(); //根据PFC编码树
   for ( int i = 0; i < n; i++ ) { //将编码（二进制位图）
      x = code.test ( i ) ? x->rc : x->lc; //转译为明码并
      if ( IsLeaf ( *x ) ) { printf ( "%c", x->data ); x = tree->root(); } //打印输出
   }
}




