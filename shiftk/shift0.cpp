int shift0 ( int* A, int n, int k ) { //�����ؽ�����ѭ������kλ��O(nk)
   if ( k < 1 ) return 0; int mov = 0;
   while ( k-- ) { //������1Ϊ���ѭ�����ƣ�������k��
      mov += shift ( A, n, 0, 1 );
   }
   return mov;
}




