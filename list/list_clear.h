template <typename T> Rank List<T>::clear() { //����б�
   Rank oldSize = _size;
   while ( 0 < _size ) remove ( header->succ ); //����ɾ���׽ڵ㣬ֱ���б���
   return oldSize;
}




