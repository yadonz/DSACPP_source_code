template <typename T> //ͨ������Ԫ��λ�ã����������[lo, hi)�ڵ�һ�����
Rank Vector<T>::partition( Rank lo, Rank hi ) { // LUG�棺������ʽ
   swap( _elem[lo], _elem[lo + rand() % ( hi - lo )] ); //��ѡһ��Ԫ������Ԫ�ؽ���
   T pivot = _elem[lo]; //�����Ͻ�������Ч�����ѡȡ��ѡ���
   while ( lo < hi ) { //�����˽���ɨ�裬ֱ������
      do hi--; while ( ( lo < hi ) && ( pivot <= _elem[hi] ) ); //������չ��׺G
      if ( lo < hi ) _elem[lo] = _elem[hi]; //�赲�߹���ǰ׺L
      do lo++; while ( ( lo < hi ) && ( _elem[lo] <= pivot ) ); //������չǰ׺L
      if ( lo < hi ) _elem[hi] = _elem[lo]; //�赲�߹����׺G
   } // assert: quit with lo == hi or hi + 1
   _elem[hi] = pivot; //��ѡ�������ǰ׺����׺֮�䣬����������ʵ
   return hi; //����������
}




