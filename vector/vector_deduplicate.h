template <typename T> Rank Vector<T>::dedup() { //ɾ�������������ظ�Ԫ�أ���Ч�棩
   Rank oldSize = _size; //��¼ԭ��ģ
   for ( Rank i = 1; i < _size; ) //��ǰ����������_elem[1,_size)
      if ( -1 == find(_elem[i], 0, i) ) //��ǰ׺[0,i)��Ѱ����[i]��ͬ�ߣ�����һ������O(i)
         i++; //������ͬ���������������
      else
         remove(i); //����ɾ��[i]��O(_size-i)
   return oldSize - _size; //��ɾ��Ԫ������
}




