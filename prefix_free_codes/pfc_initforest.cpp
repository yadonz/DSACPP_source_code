PFCForest* initForest() { //PFC����ɭ�ֳ�ʼ��
   PFCForest* forest = new PFCForest; //���ȴ�����ɭ�֣�Ȼ��
   for ( int i = 0; i < N_CHAR; i++ ) { //��ÿһ���ɴ�ӡ�ַ�[0x20, 0x80)
      forest->insert ( i, new PFCTree() ); //����һ�ö�Ӧ��PFC����������ʼʱ����
      ( *forest ) [i]->insert ( 0x20 + i ); //ֻ������Ӧ��һ����Ҷ�������ڵ�
   }
   return forest; //���ذ���N_CHAR������ɭ�֣�����ÿ����������һ���ַ�
}




