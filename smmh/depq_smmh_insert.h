template <typename T> void SMMH<T>::insert( T e ) { //insert e into an SMMH
   Vector<T>::insert(e); //����һ����Ԫ
   Rank k = _size - 1; //��ĩԪ�ؿ�ʼ
   while (1) { //�������
      if ( isRC(k) && (_elem[k-1] > _elem[k]) ) //Property #0
         { _elem[k] = _elem[k-1]; k--; }
      if ( !hasGP(k) ) break;
      if      ( e < _elem[lp(k)] ) //Property #1
         { _elem[k] = _elem[lp(k)]; k = lp(k); }
      else if ( _elem[rp(k)] < e ) //Property #2
         { _elem[k] = _elem[rp(k)]; k = rp(k); }
      else
         break;
   }
   _elem[k] = e; //��Ԫ�ؾ�λ
} //insert




