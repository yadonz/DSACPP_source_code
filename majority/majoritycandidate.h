template <typename T> T majCandidate( Vector<T> A ) { //ѡ���߱���Ҫ������������ѡ��
   T maj; //������ѡ��
// ����ɨ�裺����������c����¼maj������Ԫ�ص��������
   for ( Rank c = 0, i = 0; i < A.size(); i++ )
      if ( 0 == c ) { //ÿ��c���㣬����ζ�Ŵ�ʱ��ǰ׺P���Լ���
         maj = A[i]; c = 1; //������ѡ�߸�Ϊ�µĵ�ǰԪ��
      } else //����
         maj == A[i] ? c++ : c--; //��Ӧ�ظ��²�������
   return maj; //���ˣ�ԭ���������������ڣ���ֻ����maj ���� ���ܷ�֮��Ȼ
}



