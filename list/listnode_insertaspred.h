template <typename T> //将e紧靠当前节点之前插入于当前节点所属列表（设有哨兵头节点header）
ListNodePosi<T> ListNode<T>::insertAsPred( T const& e ) {
   ListNodePosi<T> x = new ListNode( e, pred, this ); //创建新节点
   pred->succ = x; pred = x; //设置正向链接
   return x; //返回新节点的位置
}




