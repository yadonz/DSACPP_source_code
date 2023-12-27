void trim ( const char exp[], Rank& lo, Rank& hi ) { //ɾ��exp[lo, hi]�������ŵ��ǰ׺����׺
   while ( ( lo <= hi ) && ( exp[lo] != '&#40;' ) && ( exp[lo] != '&#41;' ) ) lo++; //���ҵ�һ����
   while ( ( lo <= hi ) && ( exp[hi] != '&#40;' ) && ( exp[hi] != '&#41;' ) ) hi--; //���һ������
}

Rank divide ( const char exp[], Rank lo, Rank hi ) { //�з�exp[lo, hi]��ʹexpƥ������ӱ��ʽƥ��
   int crc = 1; //crcΪ[lo, mi]��Χ������������Ŀ֮��
   while ( ( 0 < crc ) && ( ++lo < hi ) ) //��������ַ���ֱ������������Ŀ��ȣ�����Խ��
      if ( exp[lo] == '&#40;' ) crc ++;
      else if ( exp[lo] == '&#41;' ) crc --;
   return lo;
}

bool paren ( const char exp[], Rank lo, Rank hi ) { //�����ʽexp[lo, hi]�Ƿ�����ƥ�䣨�ݹ�棩
   trim ( exp, lo, hi ); if ( lo > hi ) return true; //����������ŵ�ǰ׺����׺
   if ( ( exp[lo] != '&#40;' ) || ( exp[hi] != '&#41;' ) ) return false; //�ס�ĩ�ַ����������ţ���ز�ƥ��
   Rank mi = divide ( exp, lo, hi ); //ȷ���ʵ����зֵ�
   return paren ( exp, lo + 1, mi - 1 ) && paren ( exp, mi + 1, hi ); //�ֱ��������ӱ��ʽ
}




