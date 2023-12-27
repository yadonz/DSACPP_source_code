// 根据编码树对长为n的Bitmap串做Huffman解码
void decode ( HuffTree* tree, Bitmap* code, int n ) {
   BinNodePosi<HuffChar> x = tree->root();
   for ( int i = 0; i < n; i++ ) {
      x = code->test ( i ) ? x->rc : x->lc;
      if ( IsLeaf ( *x ) ) {  printf ( "%c", x->data.ch ); x = tree->root();  }
   }
} //解出的明码，在此直接打印输出；实用中可改为根据需要返回上层调用者




