static void generateCT //ͨ��������ȡ���ַ��ı���
   ( Bitmap* code, int length, HuffTable* table, BinNodePosi <HuffChar> v ) {
   if ( IsLeaf ( *v ) ) //����Ҷ�ڵ㣨���ж��ַ��������жϣ�
      {  table->put ( v->data.ch, code->bits2string ( length ) ); return;  }
   if ( HasLChild ( *v ) ) //Left = 0
      { code->clear ( length ); generateCT ( code, length + 1, table, v->lc ); }
   if ( HasRChild ( *v ) ) //Right = 1
      { code->set ( length ); generateCT ( code, length + 1, table, v->rc ); }
}

HuffTable* generateTable ( HuffTree* tree ) { //�����ַ�����ͳһ������ɢ�б�ʵ�ֵı������
   HuffTable* table = new HuffTable; Bitmap* code = new Bitmap;
   generateCT ( code, 0, table, tree->root() ); release ( code ); return table;
}; //release()�����ͷŸ��ӽṹ�����㷨��ֱ�ӹ�ϵ������ʵ����������




