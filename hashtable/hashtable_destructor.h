template <typename K, typename V> Hashtable<K, V>::~Hashtable() { //����ǰ�ͷ�Ͱ���鼰�ǿմ���
   for ( Rank i = 0; i < M; i++ ) //��һ����Ͱ
      if ( ht[i] ) release( ht[i] ); //�ͷŷǿյ�Ͱ
   release( ht ); //�ͷ�Ͱ����
   release( removed ); //�ͷ�����ɾ�����
} //release()�����ͷŸ��ӽṹ�����㷨��ֱ�ӹ�ϵ������ʵ����������




