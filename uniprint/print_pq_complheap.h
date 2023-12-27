#define ROOT 0
#define L_CHILD 1
#define R_CHILD -1*L_CHILD

/******************************************************************************************
 * ��ӡ���PQ_ComplHeap
 ******************************************************************************************/
template <typename T> //Ԫ������
void UniPrint::p ( PQ_ComplHeap<T> & pq ) { //����
   printf ( "%s[%d]*%d:\n", typeid ( pq ).name(), (int) &pq, pq.size() ); //������Ϣ
   int branchType[256]; //����256�� <= 2^256 = 1.16*10^77
   printComplHeap ( ( Vector<T> & ) pq, pq.size(), 0, 0, ROOT, branchType ); //��״�ṹ
   printf ( "\n" );
}

/******************************************************************************************
 * �ݹ��ӡ���
 ******************************************************************************************/
template <typename T> //Ԫ������
static void printComplHeap ( Vector<T>& elem, int n, int k, int depth, int type, int* bType ) {
   if ( k >= n ) return; //�ݹ��
   bType[depth] = type;
   printComplHeap ( elem, n, RChild ( k ), depth + 1, R_CHILD, bType ); //�����������ϣ�
   print ( elem[k] ); ( 0 < k ) && ( elem[Parent ( k ) ] < elem[k] ) ? printf ( "X" ) : printf ( " " ); printf ( "*" );
   for ( int i = 0; i < depth; i++ ) //�������ڸ���
      if ( bType[i] + bType[i+1] ) //�Ĺ����Ƿ�һ�£�����ȷ��
         printf ( "      " ); //�Ƿ�Ӧ��
      else  printf ( "��    " ); //��ӡ����
   switch ( type ) {
      case  R_CHILD  :  printf ( "����" );  break;
      case  L_CHILD  :  printf ( "����" );  break;
      default        :  printf ( "����" );  break; //root
   }
   print ( elem[k] ); ( 0 < k ) && ( elem[Parent ( k ) ] < elem[k] ) ? printf ( "X" ) : printf ( " " ); printf ( "\n" );
   printComplHeap ( elem, n, LChild ( k ), depth + 1, L_CHILD, bType ); //�����������£�
}



