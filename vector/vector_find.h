template <typename T> //������������˳�����e���ɹ��򷵻����ĳ���λ�ã����򷵻�lo-1
Rank Vector<T>::find ( T const& e, Rank lo, Rank hi ) const { //0 <= lo < hi <= _size
   while ( ( lo < hi-- ) && ( e != _elem[hi] ) ); //�Ӻ���ǰ��˳�����
   return hi; //��hi < lo������ζ��ʧ�ܣ�����hi������Ԫ�ص���
}




