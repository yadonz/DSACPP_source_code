void decode ( PFCTree* tree, Bitmap& code, int n ) { //PFC�����㷨
   BinNodePosi<char> x = tree->root(); //����PFC������
   for ( int i = 0; i < n; i++ ) { //�����루������λͼ��
      x = code.test ( i ) ? x->rc : x->lc; //ת��Ϊ���벢
      if ( IsLeaf ( *x ) ) { printf ( "%c", x->data ); x = tree->root(); } //��ӡ���
   }
}




