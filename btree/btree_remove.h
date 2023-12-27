template <typename T> bool BTree<T>::remove( const T& e ) { //��BTree����ɾ���ؼ���e
   BTNodePosi<T> v = search( e ); if ( !v ) return false; //ȷ��Ŀ��ؼ������
   Rank r = v->key.search( e ); //ȷ��Ŀ��ؼ����ڽڵ�v�е��ȣ����ϣ��϶��Ϸ���
   if ( v->child[0] ) { //��v��Ҷ�ӣ���e�ĺ�̱�����ĳҶ�ڵ�
      BTNodePosi<T> u = v->child[r + 1]; //����������һֱ���󣬼���
      while ( u->child[0] ) u = u->child[0]; //�ҳ�e�ĺ��
      v->key[r] = u->key[0]; v = u; r = 0; //����֮����λ��
   } //���ˣ�v��Ȼλ����ײ㣬�����е�r���ؼ�����Ǵ�ɾ����
   v->key.remove( r ); v->child.remove( r + 1 ); _size--; //ɾ��e���Լ����������ⲿ�ڵ�֮һ
   solveUnderflow( v ); //���б�Ҫ��������ת��ϲ�
   return true;
}




