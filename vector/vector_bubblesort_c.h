template <typename T> //����������������Ծ�棩
void Vector<T>::bubbleSort( Rank lo, Rank hi ) { //assert: 0 <= lo < hi <= size
   for( Rank last; lo < hi; hi = last )
      for( Rank i = ( last = lo ) + 1; i < hi; i++ )
         if ( _elem[i - 1] > _elem[i] ) //��������
            swap( _elem[i - 1], _elem[i] ), last = i; //����������ס���£��󣩵Ľ���λ��
}




