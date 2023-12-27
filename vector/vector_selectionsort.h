template <typename T> //����ѡ������
void Vector<T>::selectionSort( Rank lo, Rank hi ) { // 0 <= lo < hi <= size
   while ( lo < --hi )
      swap( _elem[maxItem( lo, hi )], _elem[hi] ); //��[hi]��[lo, hi]�е�����߽���
}

template <typename T> Rank Vector<T>::maxItem( Rank lo, Rank hi ) { //��[lo, hi]���ҳ������
   Rank mx = hi;
   while ( lo < hi-- ) //����ɨ��
      if ( _elem[hi] > _elem[mx] ) //���ϸ�Ƚ�
         mx = hi; //������max�ж��ʱ��֤�������ȣ�������֤selectionSort�ȶ�
   return mx;
}




