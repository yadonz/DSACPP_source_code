template <typename T> Rank BinNode<T>::size() { //ͳ�Ƶ�ǰ�ڵ���������������Ϊ����������ģ
   Rank s = 1; //���뱾��
   if ( lc ) s += lc->size(); //�ݹ������������ģ
   if ( rc ) s += rc->size(); //�ݹ������������ģ
   return s;
}




