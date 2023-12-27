template <typename T> Rank percolateUp( T* A, Rank i ) { //�Դ���A[i]�����ˣ�0 <= i < _size
   while ( 0 < i ) { //�ڵִ�Ѷ�֮ǰ��������
      Rank j = Parent( i ); //����[i]֮����[j]
      if ( lt( A[i], A[j] ) ) break; //һ������˳������������ɣ�����
      swap( A[i], A[j] ); i = j; //���ӻ�λ��������������һ��
   } //while
   return i; //�����������յִ��λ��
}




