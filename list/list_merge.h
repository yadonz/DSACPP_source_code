template <typename T> //有序列表的归并：当前列表中自p起的n个元素，与列表L中自q起的m个元素归并
ListNodePosi<T> List<T>::merge( ListNodePosi<T> p, Rank n,
                    List<T>& L, ListNodePosi<T> q, Rank m ) {
// this.valid(p) && Rank(p) + n <= size && this.sorted(p, n)
// L.valid(q) && Rank(q) + m <= L._size && L.sorted(q, m)
// 注意：在被mergeSort()调用时，this == &L && Rank(p) + n = Rank(q)
   ListNodePosi<T> pp = p->pred; //归并之后p可能不再指向首节点，故需先记忆，以便在返回前更新
   while ( ( 0 < m ) && ( q != p ) ) //q尚未出界（或在mergeSort()中，p亦尚未出界）之前
      if ( ( 0 < n ) && ( p->data <= q->data ) ) //若p尚未出界且v(p) <= v(q)，则
         { p = p->succ; n--; } //p直接后移，即完成归入
      else //否则，将q转移至p之前，以完成归入
         { insert( L.remove( ( q = q->succ )->pred ), p ); m--; }
   return pp->succ; //更新的首节点
}




