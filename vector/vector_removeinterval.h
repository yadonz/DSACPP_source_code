template <typename T> Rank Vector<T>::remove( Rank lo, Rank hi ) { //0 <= lo <= hi <= n
   if ( lo == hi ) return 0; //����Ч�ʿ��ǣ����������˻����
   while ( hi < _size ) _elem[lo++] = _elem[hi++]; //��׺[hi, _size)˳��ǰ��hi-loλ
   _size = lo; shrink(); //���¹�ģ��lo=_size֮��������������㣻���Ҫ��������
   //���б�Ҫ��������
   return hi - lo; //���ر�ɾ��Ԫ�ص���Ŀ
}




