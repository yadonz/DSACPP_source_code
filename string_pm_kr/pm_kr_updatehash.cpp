// 子串指纹快速更新算法
void updateHash ( HashCode& hashT, char* T, size_t m, size_t k, HashCode Dm ) {
   hashT = ( hashT - DIGIT ( T, k - 1 ) * Dm ) % M; //在前一指纹基础上，去除首位T[k - 1]
   hashT = ( hashT * R + DIGIT ( T, k + m - 1 ) ) % M; //添加末位T[k + m - 1]
   if ( 0 > hashT ) hashT += M; //确保散列码落在合法区间内
}




