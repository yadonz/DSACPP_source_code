HuffForest* initForest ( int* freq ) { //����Ƶ��ͳ�Ʊ�Ϊÿ���ַ�����һ����
   HuffForest* forest = new HuffForest; //��Listʵ�ֵ�Huffmanɭ��
   for ( int i = 0; i < N_CHAR; i++ ) { //Ϊÿ���ַ�
      forest->insertAsLast ( new HuffTree ); //����һ�����������ַ�����Ƶ��
      forest->last()->data->insert ( HuffChar ( 0x20 + i, freq[i] ) ); //��������
   }
   return forest;
}




