template <typename T> T Vector<T>::remove( Rank r ) { //ɾ����������Ϊr��Ԫ�أ�0 <= r < size
   T e = _elem[r]; //���ݱ�ɾ��Ԫ��
   remove( r, r + 1 ); //��������ɾ���㷨����Ч�ڶ�����[r, r + 1)��ɾ��
   return e; //���ر�ɾ��Ԫ��
}




