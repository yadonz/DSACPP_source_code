int main ( int argc, char* argv[] ) { //PFC编码、解码算法统一测试入口
   PFCForest* forest = initForest(); //初始化PFC森林
   PFCTree* tree = generateTree ( forest ); release ( forest ); //生成PFC编码树
   PFCTable* table = generateTable ( tree ); //将PFC编码树转换为编码表
   for ( int i = 1; i < argc; i++ ) { //对于命令行传入的每一明文串
      Bitmap codeString; //二进制编码串
      int n = encode ( table, codeString, argv[i] ); //将根据编码表生成（长度为n）
      decode ( tree, codeString, n ); //利用编码树，对长度为n的二进制编码串解码（直接输出）
   }
   release ( table ); release ( tree ); return 0; //释放编码表、编码树
} //release()负责释放复杂结构，与算法无直接关系，具体实现详见代码包




