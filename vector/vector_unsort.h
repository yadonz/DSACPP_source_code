template <typename T> void Vector<T>::unsort( Rank lo, Rank hi ) { //�����������[lo, hi)
   T* V = _elem + lo; //��������_elem[lo, hi)������һ����V[0, hi - lo)
   for ( Rank i = hi - lo; 1 < i; --i ) //�Ժ���ǰ
      swap( V[i - 1], V[rand() % i] ); //��V[i - 1]��V[0, i)��ĳһԪ���������
}




