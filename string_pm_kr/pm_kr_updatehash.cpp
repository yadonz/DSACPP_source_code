// �Ӵ�ָ�ƿ��ٸ����㷨
void updateHash ( HashCode& hashT, char* T, size_t m, size_t k, HashCode Dm ) {
   hashT = ( hashT - DIGIT ( T, k - 1 ) * Dm ) % M; //��ǰһָ�ƻ����ϣ�ȥ����λT[k - 1]
   hashT = ( hashT * R + DIGIT ( T, k + m - 1 ) ) % M; //���ĩλT[k + m - 1]
   if ( 0 > hashT ) hashT += M; //ȷ��ɢ�������ںϷ�������
}




