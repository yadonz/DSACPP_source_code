HashCode prepareDm ( size_t m ) { //Ԥ����������R^(m - 1) % M ���������һ�Σ������Ż���
   HashCode  Dm = 1;
   for ( size_t i = 1; i < m; i++ ) Dm = ( R * Dm ) % M; //ֱ���۳�m - 1�Σ���ȡģ
   return Dm;
}



