template <typename T> //列表内部方法：复制列表中自位置p起的n项
void List<T>::copyNodes( ListNodePosi<T> p, Rank n ) { // p合法，且至少有n-1个真后继
   init(); //创建头、尾哨兵节点并做初始化
   while ( n-- ) { insertAsLast( p->data ); p = p->succ; } //将起自p的n项依次作为末节点插入
}




