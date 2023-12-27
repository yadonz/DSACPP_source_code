template <typename T> BTNodePosi<T> BTree<T>::search( const T& e ) { //��B-���в��ҹؼ���e
   BTNodePosi<T> v = _root; _hot = NULL; //�Ӹ��ڵ����
   while ( v ) { //������
      Rank r = v->key.search( e ); //�ڵ�ǰ�ڵ��У��ҵ�������e�����ؼ���
      if ( ( 0 <= r ) && ( e == v->key[r] ) ) return v; //�ɹ����ڵ�ǰ�ڵ�������Ŀ��ؼ���
      _hot = v; v = v->child[r + 1]; //����ת���Ӧ������_hotָ���丸����������I/O�����ʱ��
   } //�������������Ƕ��ֲ��ң�����ͨ����_m��ֱ��˳�����
   return NULL; //ʧ�ܣ����յִ��ⲿ�ڵ�
}




