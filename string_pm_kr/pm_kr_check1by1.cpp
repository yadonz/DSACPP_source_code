bool check1by1 ( char* P, char* T, size_t i ) { //ָ����ͬʱ����λ�ȶ���ȷ���Ƿ�����ƥ��
   for ( size_t m = strlen ( P ), j = 0; j < m; j++, i++ ) //������ҪO(m)ʱ��
      if ( P[j] != T[i] ) return false; //��ֻҪɢ�еõ������ñ����̲�����false�ĸ��ʽ�����
   return true;
}




