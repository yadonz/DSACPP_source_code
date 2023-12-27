template <typename T> //将e插入至[r]
Rank Vector<T>::insert ( Rank r, T const& e ) { //0 <= r <= size
   expand(); //如必要，先扩容
   for ( Rank i = _size; r < i; i-- ) //自后向前，后继元素
      _elem[i] = _elem[i-1]; //顺次后移一个单元
   _elem[r] = e; _size++; //置入新元素并更新容量
   return r; //返回秩
}




