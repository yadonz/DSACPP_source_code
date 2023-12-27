/******************************************************************************************
 * Skiplist词条查找算法（供内部调用）
 * 返回关键码不大于k的最后一个词条（所对应塔的基座）
 ******************************************************************************************/
template <typename K, typename V> QNodePosi<Entry<K, V>> Skiplist<K, V>::search( K k ) {
   for ( QNodePosi<Entry<K, V>> p = first()->data->header; ; ) //从顶层Quadlist的首节点p出发
      if ( ( p->succ->succ ) && ( p->succ->entry.key <= k ) ) p = p->succ; //尽可能右移
      else if ( p->below ) p = p->below; //水平越界时，下移
      else return p; //验证：此时的p符合输出约定（可能是最底层列表的header）
} //体会：得益于哨兵的设置，哪些环节被简化了？




