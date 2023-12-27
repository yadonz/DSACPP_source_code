// ��λ���㷨�����棺Ч�ʵͣ���������max(n1, n2)��С�����
template <typename T> //������S1[lo1, lo1 + n1)��S2[lo2, lo2 + n2)�ֱ���������������ظ�
T trivialMedian( Vector<T>& S1, Rank lo1, Rank n1, Vector<T>& S2, Rank lo2, Rank n2 ) {
   Rank hi1 = lo1 + n1, hi2 = lo2 + n2;
   Vector<T> S; //�����������������鲢Ϊһ����������
   while ( ( lo1 < hi1 ) && ( lo2 < hi2 ) )
      S.insert( S1[lo1] <= S2[lo2] ? S1[lo1++] : S2[lo2++] );
   while ( lo1 < hi1 ) S.insert( S1[lo1++] );
   while ( lo2 < hi2 ) S.insert( S2[lo2++] );
   return S[( n1 + n2 ) / 2]; //ֱ�ӷ��ع鲢��������λ��
}




