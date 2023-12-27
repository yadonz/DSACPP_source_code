/******************************************************************************************
 * ���۱���ɭ�����б���ȫ�ѻ�����ʽ��ʵ�֣������Թ��̶�������
 * ����ɭ�ֵ�ʵ�ַ�ʽ�������ȼ�����ʱ������ǰ��Ӧ�Ĺ���ֻ��������Ӧ��־��
 *    DSA_PQ_List��DSA_PQ_ComplHeap��DSA_PQ_LeftHeap
 ******************************************************************************************/
int main ( int argc, char* argv[] ) { //Huffman�����㷨ͳһ����
   int* freq = statistics ( argv[1] ); //���������ļ���ͳ�Ƹ��ַ��ĳ���Ƶ��
   HuffForest* forest = initForest ( freq ); release ( freq ); //����Huffmanɭ��
   HuffTree* tree = generateTree ( forest ); release ( forest ); //����Huffman������
   HuffTable* table = generateTable ( tree ); //��Huffman������ת��Ϊ�����
   for ( int i = 2; i < argc; i++ ) { //���������д����ÿһ���Ĵ�
      Bitmap* codeString = new Bitmap; //�����Ʊ��봮
      int n = encode ( table, codeString, argv[i] ); //�����ݱ�������ɣ�����Ϊn��
      decode ( tree, codeString, n ); //����Huffman���������Գ���Ϊn�Ķ����Ʊ��봮����
      release ( codeString );
   }
   release ( table ); release ( tree ); return 0; //�ͷű����������
} //release()�����ͷŸ��ӽṹ�����㷨��ֱ�ӹ�ϵ������ʵ����������




