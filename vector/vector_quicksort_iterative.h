#define Put( K, s, t ) { if ( 1 < (t) - (s) ) { K.push(s); K.push(t); } }
#define Get( K, s, t ) { t = K.pop(); s = K.pop(); }

template <typename T> //������������
void Vector<T>::quickSort( Rank lo, Rank hi ) { //0 <= lo < hi <= size
   Stack<Rank> Task; Put( Task, lo, hi ); //�����ڶԵݹ������������
   while ( !Task.empty() ) {
      Get( Task, lo, hi );
      Rank mi = partition( lo, hi ); //��[lo, hi)�ڹ������
      if ( mi - lo < hi - mi ) { Put( Task, mi+1, hi ); Put( Task, lo, mi ); }
      else                     { Put( Task, lo, mi ); Put( Task, mi+1, hi ); }
   } //������������ջ��С�������ȳ�ջִ�У����ɱ�֤�ݹ���ȣ��ռ�ɱ�������O(logn)
}




