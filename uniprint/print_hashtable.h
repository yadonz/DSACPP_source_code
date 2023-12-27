/******************************************************************************************
 * Hashtable
 ******************************************************************************************/

template <typename K, typename V> //e��value
void UniPrint::p ( Hashtable<K, V>& HT ) { //����
   printf( "%s[%d]*(%d + %d)/%d:\n", typeid( HT ).name(), (int)&HT, HT.N, HT.removed->size(), HT.M ); //������Ϣ
   for ( Rank i = 0; i < HT.M; i++ ) //���Ͱ���
      printf ( "  %4d  ", i );
   printf ( "\n" );
   for ( Rank i = 0; i < HT.M; i++ ) //�������Ԫ��
      if ( HT.ht[i] ) printf ( "-<%04d>-", HT.ht[i]->key ); //��ʾ�ã���������int
      else if ( HT.removed->test(i) ) printf ( "-<****>-" );
      else printf ( "--------" );
   printf ( "\n" );
   for ( Rank i = 0; i < HT.M; i++ ) //�������Ԫ��
      if ( HT.ht[i] ) printf ( "    %c   ", HT.ht[i]->value ); //��ʾ�ã���������char
//      if (ht.ht[i]) printf("%8s", ht.ht[i]->value); //���Huffman������ʹ�õ�ɢ�б�
      else if ( HT.removed->test(i) ) printf ( "    *   " );
      else printf ( "        " );
   printf ( "\n" );
}




