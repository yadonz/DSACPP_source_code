/******************************************************************************************
 * ��ɢ�У���Ͱ̫��ʱ��ɢ�б������������ݣ��ٽ�������һ�����±�
 * ɢ�к����Ķ�ַ���Mֱ����أ��ʲ��ɼ򵥵���������ԭͰ����
 ******************************************************************************************/
template <typename K, typename V> void Hashtable<K, V>::rehash() {
   Rank oldM = M; Entry<K, V>** oldHt = ht;
   M = primeNLT( 4 * N, 1048576, PRIME_TABLE ); //�������ټӱ���������ɾ���ܶ࣬���ܷ������ݣ�
   ht = new Entry<K, V>*[M]; N = 0; memset( ht, 0, sizeof( Entry<K, V>* ) * M ); //Ͱ����
   release( removed ); removed = new Bitmap( M ); //����ɾ�����
   for ( Rank i = 0; i < oldM; i++ ) //ɨ��ԭ��
      if ( oldHt[i] ) //��ÿ���ǿ�Ͱ�еĴ���
         put( oldHt[i]->key, oldHt[i]->value ); //ת���±�
   release( oldHt ); //�ͷš��������д�������ת�ƣ���ֻ���ͷ�Ͱ���鱾��
}




