template <typename T> //对列表中起始于位置p、宽度为n的区间做插入排序
void List<T>::insertionSort( ListNodePosi<T> p, Rank n ) { // valid(p) && Rank(p) + n <= size
   for ( Rank r = 0; r < n; r++ ) { //逐一为各节点
      insert( search( p->data, r, p ), p->data ); //查找适当的位置并插入
      p = p->succ; remove( p->pred ); //转向下一节点
   }
}




