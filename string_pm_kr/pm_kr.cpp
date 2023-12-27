int match ( char* P, char* T ) { //��ƥ���㷨��Karp-Rabin��
   size_t m = strlen ( P ), n = strlen ( T ); //assert: m <= n
   HashCode Dm = prepareDm ( m ), hashP = 0, hashT = 0;
   for ( size_t i = 0; i < m; i++ ) { //��ʼ��
      hashP = ( hashP * R + DIGIT ( P, i ) ) % M; //����ģʽ����Ӧ��ɢ��ֵ
      hashT = ( hashT * R + DIGIT ( T, i ) ) % M; //�����ı�����ǰmλ���ĳ�ʼɢ��ֵ
   }
   for ( size_t k = 0; ; ) { //����
      if ( hashT == hashP )
         if ( check1by1 ( P, T, k ) ) return k;
      if ( ++k > n - m ) return k; //assert: k > n - m����ʾ��ƥ��
      else updateHash ( hashT, T, m, k, Dm ); //���򣬸����Ӵ�ɢ���룬��������
   }
}




