template <typename T> //�ؼ���ɾ�������ڵ����磬�����ڵ���ת��ϲ�����
void BTree<T>::solveUnderflow( BTNodePosi<T> v ) {
   while ( ( _m + 1 ) / 2 > v->child.size() ) { //���ǵ�ǰ�ڵ㲢δ����
      BTNodePosi<T> p = v->parent;
      if ( !p ) { //�ѵ����ڵ㣨�������Ӽ��ɣ�
         if ( !v->key.size() && v->child[0] ) {
            //��������Ϊ������v�Ѳ����ؼ��룬ȴ�У�Ψһ�ģ��ǿպ��ӣ���
            _root = v->child[0]; _root->parent = NULL; //����ڵ�ɱ�����
            v->child[0] = NULL; release( v ); //���������ö�������
         } //�����߶Ƚ���һ��
         return;
      }
      Rank r = 0;
      while ( p->child[r] != v ) r++;
      //ȷ��v��p�ĵ�r�����ӡ�����ʱv���ܲ����ؼ��룬�ʲ���ͨ���ؼ������
      //���⣬��ʵ���˺���ָ����е���֮��Ҳ��ֱ�ӵ���Vector::find()��λ
   // ���1�������ֵܽ�ؼ���
      if ( 0 < r ) { //��v����p�ĵ�һ�����ӣ���
         BTNodePosi<T> ls = p->child[r - 1]; //���ֵܱش���
         if ( ( _m + 1 ) / 2 < ls->child.size() ) { //�����ֵ��㹻���֡�����
            v->key.insert( 0, p->key[r - 1] ); // p���һ���ؼ����v����Ϊ��С�ؼ��룩
            p->key[r - 1] = ls->key.remove( ls->key.size() - 1 ); // ls�����ؼ���ת��p
            v->child.insert( 0, ls->child.remove( ls->child.size() - 1 ) );
            //ͬʱls�����Ҳຢ�ӹ��̸�v
            if ( v->child[0] ) v->child[0]->parent = v; //��Ϊv������ຢ��
            return; //���ˣ�ͨ����������ɵ�ǰ�㣨�Լ����в㣩�����紦��
         }
      } //���ˣ����ֵ�ҪôΪ�գ�Ҫô̫���ݡ�
   // ���2�������ֵܽ�ؼ���
      if ( p->child.size() - 1 > r ) { //��v����p�����һ�����ӣ���
         BTNodePosi<T> rs = p->child[r + 1]; //���ֵܱش���
         if ( ( _m + 1 ) / 2 < rs->child.size() ) { //�����ֵ��㹻���֡�����
            v->key.insert( v->key.size(),
                           p->key[r] ); // p���һ���ؼ����v����Ϊ���ؼ��룩
            p->key[r] = rs->key.remove( 0 ); // rs����С�ؼ���ת��p
            v->child.insert( v->child.size(), rs->child.remove( 0 ) );
            //ͬʱrs������ຢ�ӹ��̸�v
            if ( v->child[v->child.size() - 1] ) //��Ϊv�����Ҳຢ��
               v->child[v->child.size() - 1]->parent = v;
            return; //���ˣ�ͨ����������ɵ�ǰ�㣨�Լ����в㣩�����紦��
         }
      } //���ˣ����ֵ�ҪôΪ�գ�Ҫô̫���ݡ�
   // ���3�������ֵ�ҪôΪ�գ���������ͬʱ����Ҫô��̫���ݡ������ϲ�
      if ( 0 < r ) { //�����ֵܺϲ�
         BTNodePosi<T> ls = p->child[r - 1]; //���ֵܱش���
         ls->key.insert( ls->key.size(), p->key.remove( r - 1 ) ); p->child.remove( r );
         // p�ĵ�r - 1���ؼ���ת��ls��v������p�ĵ�r������
         ls->child.insert( ls->child.size(), v->child.remove( 0 ) );
         if ( ls->child[ls->child.size() - 1] ) // v������ຢ�ӹ��̸�ls�����Ҳຢ��
            ls->child[ls->child.size() - 1]->parent = ls;
         while ( !v->key.empty() ) { // vʣ��Ĺؼ���ͺ��ӣ�����ת��ls
            ls->key.insert( ls->key.size(), v->key.remove( 0 ) );
            ls->child.insert( ls->child.size(), v->child.remove( 0 ) );
            if ( ls->child[ls->child.size() - 1] ) 
               ls->child[ls->child.size() - 1]->parent = ls;
         }
         release ( v ); //�ͷ�v
      } else { //�����ֵܺϲ�
         BTNodePosi<T> rs = p->child[r + 1]; //���ֵܱش���
         rs->key.insert( 0, p->key.remove( r ) ); p->child.remove( r );
         // p�ĵ�r���ؼ���ת��rs��v������p�ĵ�r������
         rs->child.insert( 0, v->child.remove( v->child.size() - 1 ) );
         if ( rs->child[0] ) rs->child[0]->parent = rs; // v�����Ҳຢ�ӹ��̸�rs������ຢ��
         while ( !v->key.empty() ) { // vʣ��Ĺؼ���ͺ��ӣ�����ת��rs
            rs->key.insert( 0, v->key.remove( v->key.size() - 1 ) );
            rs->child.insert( 0, v->child.remove( v->child.size() - 1 ) );
            if ( rs->child[0] ) rs->child[0]->parent = rs;
         }
         release( v ); //�ͷ�v
      }
      v = p; //����һ�㣬���б�Ҫ�������ת��ϲ���������O(logn)��
   } //while
}




