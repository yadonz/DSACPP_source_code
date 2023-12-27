/******************************************************************************************
 * ����λͼ
 ******************************************************************************************/
int testBitmap ( int n ) {
   bool* B = new bool[n]; memset ( B, 0, n * sizeof ( bool ) ); //����λͼ���������漴O(n)ʱ���ʼ��
   Bitmap M ( n );
   for ( int i = 0; i < 9 * n; i++ ) {
      Rank k = dice ( n );
      printf ( "set(%d) ...", k ); //set(k)
      B[k] = true; M.set ( k );
      printf ( "done\n CRC: " );
      for ( int j = 0; j < n; j++ )
         printf ( "&#37;6c", B[j] == M.test ( j ) ? ' ' : '!' );
      printf ( "\n B[]: " );
      for ( int j = 0; j < n; j++ )
         printf ( "&#37;6c", B[j] ? 'x' : '.' );
      printf ( "\n M[]: " );
      for ( int j = 0; j < n; j++ )
         printf ( "&#37;6c", M.test ( j ) ? 'x' : '.' );
      printf ( "\n\n\n" );
   }
   delete [] B;
   return 0;
}

/******************************************************************************************
 * ����λͼ
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   if ( 2 > argc ) { printf ( "Usage: %s <size of test>\a\a\n", argv[0] ); return 1; }
   srand ( ( unsigned int ) time ( NULL ) ); //�����������
   return testBitmap ( atoi ( argv[1] ) ); //��������
}




