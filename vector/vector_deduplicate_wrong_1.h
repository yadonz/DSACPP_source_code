template <typename T> int Vector<T>::dedup() { //ɾ�������������ظ�Ԫ�أ�����棩
   int oldSize = _size; //��¼ԭ��ģ
   for ( Rank i = 1; i < _size; i++ ) { //��һ����_elem[i]
      Rank j = find ( _elem[i], 0, i ); //��_elem[i]��ǰ����Ѱ����֮��ͬ�ߣ�����һ����
      if ( 0 <= j ) remove ( j ); //�����ڣ���ɾ��֮�����ڴ����������һ����������i++��
   }
   return oldSize - _size; //������ģ�仯��������ɾ��Ԫ������
}




