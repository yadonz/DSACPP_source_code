template <typename T> Rank Vector<T>::uniquify() { //���������ظ�Ԫ���޳��㷨����Ч�棩
   Rank i = 0, j = 0; //���Ի��조���ڡ�Ԫ�ص���
   while ( ++j < _size ) //��һɨ�裬ֱ��ĩԪ��
      if ( _elem[i] != _elem[j] ) //������ͬ��
         _elem[++i] = _elem[j]; //���ֲ�ͬԪ��ʱ����ǰ����������ǰ���Ҳ�
   _size = ++i; shrink(); //ֱ�ӽس�β������Ԫ��
   return j - i; //������ģ�仯��������ɾ��Ԫ������
}




