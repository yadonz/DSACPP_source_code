template <typename T> //�����±����������ͨ����ֱ�ӷ����б�ڵ㣨O(r)Ч�ʣ��䷽�㣬����ã�
ListNodePosi<T> List<T>::operator[]( Rank r ) const { // 0 <= r < size
   ListNodePosi<T> p = first(); //���׽ڵ����
   while ( 0 < r-- ) p = p->succ; //˳����r���ڵ㼴��
   return p; //Ŀ��ڵ�
}




