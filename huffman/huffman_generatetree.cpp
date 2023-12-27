HuffTree* minHChar ( HuffForest* forest ) { //��Huffmanɭ�����ҳ�Ȩ����С�ĳ��ַ�
   ListNodePosi<HuffTree*> m = forest->first(); //���׽ڵ�������������нڵ�
   for ( ListNodePosi<HuffTree*> p = m->succ; forest->valid( p ); p = p->succ )
      if ( m->data->root()->data.weight > p->data->root()->data.weight ) //���ϸ���
         m = p; //�ҵ���С�ڵ㣨����Ӧ��Huffman������
   return forest->remove( m ); //��ɭ����ȡ����������������
}

HuffTree* generateTree ( HuffForest* forest ) { //Huffman�����㷨
   while ( 1 < forest->size() ) {
      HuffTree* T1 = minHChar ( forest ); HuffTree* T2 = minHChar ( forest );
      HuffTree* S = new HuffTree();
      S->insert ( HuffChar ( '&#94;', T1->root()->data.weight + T2->root()->data.weight ) );
      S->attach ( T1, S->root() ); S->attach ( S->root(), T2 );
      forest->insertAsLast ( S );
   } //assert: ѭ������ʱ��ɭ����Ψһ���б��׽ڵ��У����ǿ�����Huffman������
   return forest->first()->data;
}




