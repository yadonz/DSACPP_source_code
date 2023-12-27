template <typename T> // S1[lo1, lo1 + n)��S2[lo2, lo2 + n)�ֱ�����n > 0������������ظ�
T median( Vector<T>& S1, Rank lo1, Vector<T>& S2, Rank lo2, Rank n ) { //��λ���㷨����Ч�棩
   if ( n < 3 ) return trivialMedian( S1, lo1, n, S2, lo2, n ); //�ݹ��
   Rank mi1 = lo1 + n / 2, mi2 = lo2 + ( n - 1 ) / 2; //���ȣ��ӽ�������
   if ( S1[mi1] < S2[mi2] )
      return median ( S1, mi1, S2, lo2, n + lo1 - mi1 ); //ȡS1�Ұ롢S2���
   else if ( S1[mi1] > S2[mi2] )
      return median ( S1, lo1, S2, mi2, n + lo2 - mi2 ); //ȡS1��롢S2�Ұ�
   else
      return S1[mi1];
}




