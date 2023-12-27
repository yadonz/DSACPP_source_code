/******************************************************************************************
 * Skiplist
 ******************************************************************************************/

template <typename K, typename V> //e、value
void UniPrint::p ( Skiplist<K, V>& s ) { //引用
   printf ( "%s[%d]*%d*%d:\n", typeid ( s ).name(), (int) &s, s.height(), s.size() ); //基本信息
   s.traverse ( print ); //通过print()遍历输出所有元素
   printf ( "\n" );
}




