//���ֲ����㷨���汾A��������������������[lo, hi)�ڲ���Ԫ��e��0 <= lo <= hi <= _size
template <typename T> static Rank binSearch( T* S, T const& e, Rank lo, Rank hi ) {
   while ( lo < hi ) { //ÿ����������Ҫ�����αȽ��жϣ���������֧
      Rank mi = ( lo + hi ) >> 1; //���е�Ϊ��㣨�������۰룬��Ч������ֵ��ʾ������һλ��
      if      ( e < S[mi] ) hi = mi; //����ǰ���[lo, mi)��������
      else if ( S[mi] < e ) lo = mi + 1; //�������(mi, hi)��������
      else                  return mi; //��mi������
   } //�ɹ����ҿ�����ǰ��ֹ
   return -1; //����ʧ��
} //�ж������Ԫ��ʱ�����ܱ�֤����������ߣ�����ʧ��ʱ���򵥵ط���-1��������ָʾʧ�ܵ�λ��




