/******************************************************************************************
 * 初始化Huffman森林：根据传入的频率统计表freq，为每个字符创建一棵树
 ******************************************************************************************
 * forest基于优先级队列实现，此算法适用于符合PQ接口的任何实现方式
 * 为Huffman_PQ_List、Huffman_PQ_ComplHeap和Huffman_PQ_LeftHeap共用
 * 编译前对应工程只需设置相应标志：DSA_PQ_List、DSA_PQ_ComplHeap或DSA_PQ_LeftHeap
 ******************************************************************************************/
HuffForest* initForest ( int* freq ) {
   HuffForest* forest = new HuffForest; //以PQ实现的Huffman森林
   for ( int i = 0; i < N_CHAR; i++ ) { //为每个字符
      BinTree<HuffChar>* tree = new BinTree<HuffChar>(); //生成一棵树，并将字符集频率
      tree->insert ( HuffChar ( 0x20 + i, rand() % 123 ) ); //存入其中
      forest->insert ( tree ); //再将新树插入森林
   }
   return forest;
}




