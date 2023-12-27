/******************************************************************************************
 * Huffman�������㷨���Դ����Huffmanɭ��forest�𲽺ϲ���ֱ����Ϊһ����
 ******************************************************************************************
 * forest�������ȼ�����ʵ�֣����㷨�����ڷ���PQ�ӿڵ��κ�ʵ�ַ�ʽ
 * ΪHuffman_PQ_List��Huffman_PQ_ComplHeap��Huffman_PQ_LeftHeap����
 * ����ǰ��Ӧ����ֻ��������Ӧ��־��DSA_PQ_List��DSA_PQ_ComplHeap��DSA_PQ_LeftHeap
 ******************************************************************************************/
HuffTree* generateTree ( HuffForest* forest ) {
   while ( 1 < forest->size() ) {
      HuffTree* s1 = forest->delMax(); HuffTree* s2 = forest->delMax();
      HuffTree* s = new HuffTree();
      s->insert ( HuffChar ( '&#94;', s1->root()->data.weight + s2->root()->data.weight ) );
      s->attach ( s1, s->root() ); s->attach ( s->root(), s2 );
      forest->insert ( s ); //���ϲ����Huffman�����Huffmanɭ��
   }
   HuffTree* tree = forest->delMax(); //���ˣ�ɭ���е����һ����
   return tree; //��ȫ��Huffman������
}




