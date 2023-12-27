/******************************************************************************************
 * Quadlist
 ******************************************************************************************/

template <typename T> //元素类型
void UniPrint::p ( Quadlist<T>& q ) { //引用
   printf ( "%s[%d]*%03d: ", typeid ( q ).name(), (int) &q, q._size ); //基本信息
   if ( q._size <= 0 ) {  printf ( "\n" ); return;  }
   QNode<T>* curr = q.header;
   QNode<T>* base = q.header->succ; //当前节点所在
   while ( base->below ) base = base->below; //塔底
   while ( base->pred ) base = base->pred; //底层之header
   for ( Rank i = 0; i < q._size; i++ ) { //对于当前层的每一节点
      curr = curr->succ; //curr
      QNode<T>* proj = curr; //找到与curr对应的
      while ( proj->below ) proj = proj->below; //塔底节点（投影）
      while ( ( base = base->succ ) != proj ) //移动base直到proj，期间不断
         printf ( "------------" ); //延长水平联接线
      print ( curr->entry ); //最后，输出当前层的当前词条
   }
   printf ( "\n" );
}




