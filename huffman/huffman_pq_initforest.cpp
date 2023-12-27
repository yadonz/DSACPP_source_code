/******************************************************************************************
 * ��ʼ��Huffmanɭ�֣����ݴ����Ƶ��ͳ�Ʊ�freq��Ϊÿ���ַ�����һ����
 ******************************************************************************************
 * forest�������ȼ�����ʵ�֣����㷨�����ڷ���PQ�ӿڵ��κ�ʵ�ַ�ʽ
 * ΪHuffman_PQ_List��Huffman_PQ_ComplHeap��Huffman_PQ_LeftHeap����
 * ����ǰ��Ӧ����ֻ��������Ӧ��־��DSA_PQ_List��DSA_PQ_ComplHeap��DSA_PQ_LeftHeap
 ******************************************************************************************/
HuffForest* initForest ( int* freq ) {
   HuffForest* forest = new HuffForest; //��PQʵ�ֵ�Huffmanɭ��
   for ( int i = 0; i < N_CHAR; i++ ) { //Ϊÿ���ַ�
      BinTree<HuffChar>* tree = new BinTree<HuffChar>(); //����һ�����������ַ���Ƶ��
      tree->insert ( HuffChar ( 0x20 + i, rand() % 123 ) ); //��������
      forest->insert ( tree ); //�ٽ���������ɭ��
   }
   return forest;
}




