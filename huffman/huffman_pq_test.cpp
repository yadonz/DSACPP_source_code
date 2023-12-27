/******************************************************************************************
 * 无论编码森林由列表、完全堆还是左式堆实现，本测试过程都可适用
 * 编码森林的实现方式采用优先级队列时，编译前对应的工程只需设置相应标志：
 *    DSA_PQ_List、DSA_PQ_ComplHeap或DSA_PQ_LeftHeap
 ******************************************************************************************/
int main ( int argc, char* argv[] ) { //Huffman编码算法统一测试
   int* freq = statistics ( argv[1] ); //根据样本文件，统计各字符的出现频率
   HuffForest* forest = initForest ( freq ); release ( freq ); //创建Huffman森林
   HuffTree* tree = generateTree ( forest ); release ( forest ); //生成Huffman编码树
   HuffTable* table = generateTable ( tree ); //将Huffman编码树转换为编码表
   for ( int i = 2; i < argc; i++ ) { //对于命令行传入的每一明文串
      Bitmap* codeString = new Bitmap; //二进制编码串
      int n = encode ( table, codeString, argv[i] ); //将根据编码表生成（长度为n）
      decode ( tree, codeString, n ); //利用Huffman编码树，对长度为n的二进制编码串解码
      release ( codeString );
   }
   release ( table ); release ( tree ); return 0; //释放编码表、编码树
} //release()负责释放复杂结构，与算法无直接关系，具体实现详见代码包




