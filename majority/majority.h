template <typename T> bool majority( Vector<T> A, T& maj ) { //���������㷨��T�ɱȽϿ��е�
   maj = majCandidate( A ); //��Ҫ�ԣ�ѡ����ѡ��maj
   return majCheck( A, maj ); //����ԣ���֤maj�Ƿ��ȷ��ѡ
}




