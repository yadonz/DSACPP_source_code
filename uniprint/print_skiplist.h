/******************************************************************************************
 * Skiplist
 ******************************************************************************************/

template <typename K, typename V> //e��value
void UniPrint::p ( Skiplist<K, V>& s ) { //����
   printf ( "%s[%d]*%d*%d:\n", typeid ( s ).name(), (int) &s, s.height(), s.size() ); //������Ϣ
   s.traverse ( print ); //ͨ��print()�����������Ԫ��
   printf ( "\n" );
}




