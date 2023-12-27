template <typename T> BinNodePosi<T> Splay<T>::insert( const T& e ) { //将关键码e插入伸展树中
   if ( !_root ) { _size = 1; return _root = new BinNode<T>( e ); } //原树为空
   BinNodePosi<T> t = search( e );
   if ( e == t->data ) return t; //目标节点t若存在，伸展至根
   if ( t->data < e ) { //在右侧嫁接
      t->parent = _root = new BinNode<T>( e, NULL, t, t->rc ); // lc == t必非空
      if ( t->rc ) { t->rc->parent = _root; t->rc = NULL; } // rc或为空
   } else { //在左侧嫁接
      t->parent = _root = new BinNode<T>( e, NULL, t->lc, t ); // rc == t必非空
      if ( t->lc ) { t->lc->parent = _root; t->lc = NULL; } // lc或为空
   }
   _size++; updateHeightAbove( t ); return _root; //更新规模及高度，报告插入成功
} //无论e是否存在于原树中，返回时总有_root->data == e




