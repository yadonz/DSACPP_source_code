template <typename T> Vector<T>& Vector<T>::operator= ( Vector<T> const& V ) { //���
   if ( _elem ) delete [] _elem; //�ͷ�ԭ������
   copyFrom ( V._elem, 0, V.size() ); //���帴��
   return *this; //���ص�ǰ��������ã��Ա���ʽ��ֵ
}




