template <typename T> bool majCheck ( Vector<T> A, T maj ) { //��֤��ѡ���Ƿ�ȷΪ����
   Rank occurrence = 0; //maj��A[]�г��ֵĴ���
   for ( Rank i = 0; i < A.size(); i++ ) //��һ����A[]�ĸ���Ԫ��
      if ( A[i] == maj ) occurrence++; //ÿ����һ��maj�������¼�����
   return 2 * occurrence > A.size(); //�������յļ���ֵ�������ж��Ƿ��ȷ��ѡ
}




