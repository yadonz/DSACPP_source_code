template <typename K, typename V> Hashtable <K, V>::Hashtable( Rank c ) { //����ɢ�б�����Ϊ
   M = primeNLT( c, 1048576, "../../_input/prime-1048576-bitmap.txt" ); //��С��c������M
   N = 0; ht = new Entry<K, V>*[M]; //����Ͱ���飨�ٶ��ɹ���
   memset( ht, 0, sizeof( Entry<K, V>* ) * M ); //��ʼ����Ͱ
   removed = new Bitmap( M ); //��λͼ��¼����ɾ��λ������ = removed->size() = removed->top
}




