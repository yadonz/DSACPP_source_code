template <typename T> //��e������[r]
Rank Vector<T>::insert ( Rank r, T const& e ) { //0 <= r <= size
   expand(); //���Ҫ��������
   for ( Rank i = _size; r < i; i-- ) //�Ժ���ǰ�����Ԫ��
      _elem[i] = _elem[i-1]; //˳�κ���һ����Ԫ
   _elem[r] = e; _size++; //������Ԫ�ز���������
   return r; //������
}




