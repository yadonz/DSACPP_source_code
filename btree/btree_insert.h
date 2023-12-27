template <typename T> bool BTree<T>::insert( const T& e ) { //���ؼ���e����B����
   BTNodePosi<T> v = search( e ); if ( v ) return false; //ȷ��Ŀ��ڵ㲻����
   Rank r = _hot->key.search( e ); //�ڽڵ�_hot������ؼ��������в��Һ��ʵĲ���λ��
   _hot->key.insert( r + 1, e ); //���¹ؼ��������Ӧ��λ��
   _hot->child.insert( r + 2, NULL ); //����һ��������ָ��
   _size++; //����ȫ����ģ
   solveOverflow( _hot ); //���б�Ҫ����������
   return true; //����ɹ�
}




