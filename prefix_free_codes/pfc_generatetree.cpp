PFCTree* generateTree ( PFCForest* forest ) { //����PFC��
   srand ( ( unsigned int ) time ( NULL ) ); //���ｫ���ȡ���ϲ������������������
   while ( 1 < forest->size() ) { //����|forest|-1�κϲ�
      PFCTree* s = new PFCTree; s->insert ( '&#94;' ); //���������������Ϊ"^"��
      Rank r1 = rand() % forest->size(); //���ѡȡr1����
      s->attach ( ( *forest ) [r1], s->root() ); //��Ϊ�����������
      forest->remove ( r1 ); //�漴�޳�
      Rank r2 = rand() % forest->size(); //���ѡȡr2����
      s->attach ( s->root(), ( *forest ) [r2] ); //��Ϊ�����������
      forest->remove ( r2 ); //�漴�޳�
      forest->insert ( forest->size(), s ); //�ϲ����PFC������ֲ��PFCɭ��
   }
   return ( *forest ) [0]; //���ˣ�ɭ�����д�����һ��������ȫ��PFC������
}




