template <typename T> //оРа©оё╤ШеепР
void Vector<T>::shellSort( Rank lo, Rank hi ) { // 0 <= lo < hi <= size <= 2^31
   for ( Rank d = 0x7FFFFFFF; 0 < d; d >>= 1 ) // PS Sequence: { 1, 3, 7, 15, 31, ... }
      for ( Rank j = lo + d; j < hi; j++ ) { // for each j in [lo+d, hi)
         T x = _elem[j]; Rank i = j; // within the prefix of the subsequence of [j]
         while ( ( lo + d <= i ) && ( x < _elem[i - d] ) ) // find the appropriate
            _elem[i] = _elem[i - d], i -= d; // predecessor [i]
         _elem[i] = x; // where to insert [j]
      }
}




