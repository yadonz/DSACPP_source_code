template <typename T> int Vector<T>::dedup() { //ɾ�������������ظ�Ԫ�أ������棩
   int oldSize = _size; //��¼ԭ��ģ
   int i = -1; //����ǰ�˿�ʼ
   while ( ++i < _size - 1 ) { //��ǰ�����һ
      int j = i + 1; //assert: _elem[0, i]�в����ظ�Ԫ��
      while ( j < _size )
         if ( _elem[i] == _elem[j] ) remove ( j ); //����ͬ����ɾ������
         else j++; //������ɨ��
   }
   return oldSize - _size; //������ģ�仯��������ɾ��Ԫ������
}




