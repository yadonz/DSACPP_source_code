// ���ݱ������Գ�Ϊn��Bitmap����Huffman����
void decode ( HuffTree* tree, Bitmap* code, int n ) {
   BinNodePosi<HuffChar> x = tree->root();
   for ( int i = 0; i < n; i++ ) {
      x = code->test ( i ) ? x->rc : x->lc;
      if ( IsLeaf ( *x ) ) {  printf ( "%c", x->data.ch ); x = tree->root();  }
   }
} //��������룬�ڴ�ֱ�Ӵ�ӡ�����ʵ���пɸ�Ϊ������Ҫ�����ϲ������




