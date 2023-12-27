/******************************************************************************************
 * BTree�����ӡ
 ******************************************************************************************/
#include "Bitmap/Bitmap.h" //ʹ��λͼ��¼��֧ת��

/******************************************************************************************
 * BTree��ӡ����ڣ�
 ******************************************************************************************/
template <typename T> //Ԫ������
void UniPrint::p ( BTree<T> & bt ) { //����
   printf ( "%s[%d]*%d:\n", typeid ( bt ).name(), (int) &bt, bt.size() ); //������Ϣ
   Bitmap* leftmosts = new Bitmap; //��¼��ǰ�ڵ����ȵķ���
   Bitmap* rightmosts = new Bitmap; //��¼��ǰ�ڵ����ȵķ���
   printBTree ( bt.root(), 0, true, true, leftmosts, rightmosts ); //�����״�ṹ
   release ( leftmosts ); release ( rightmosts ); printf ( "\n" );
}

/******************************************************************************************
 * BTree��ӡ���ݹ飩
 ******************************************************************************************/
template <typename T> //Ԫ������
static void printBTree ( BTNodePosi<T> bt, int depth, bool isLeftmost, bool isRightmost, Bitmap* leftmosts, Bitmap* rightmosts ) {
   if ( !bt ) return;
   isLeftmost ? leftmosts->set ( depth ) : leftmosts->clear ( depth ); //���û������ǰ��Ĺ����־
   isRightmost ? rightmosts->set ( depth ) : rightmosts->clear ( depth ); //���û������ǰ��Ĺ����־
   int k = bt->child.size() - 1; //�ҵ���ǰ�ڵ�����Ҳຢ�ӣ���
   printBTree ( bt->child[k], depth + 1, false, true, leftmosts, rightmosts ); //�ݹ����֮
   while ( 0 < k-- ) { //����������������������Ҳ�Ĺؼ���
      print ( bt->key[k] ); printf ( " *>" );
      for ( int i = 0; i < depth; i++ ) //�������ڸ���
         ( leftmosts->test ( i ) && leftmosts->test ( i + 1 ) || rightmosts->test ( i ) && rightmosts->test ( i + 1 ) ) ? //�Ĺ����Ƿ�һ�£�����ȷ��
         printf ( "      " ) : printf ( "��    " ); //�Ƿ�Ӧ�ô�ӡ����������
      if ( ( ( 0 == depth && 1 < bt->key.size() ) || !isLeftmost && isRightmost ) && bt->key.size() - 1 == k ) printf ( "����" );
      else if ( ( ( 0 == depth && 1 < bt->key.size() ) || isLeftmost && !isRightmost ) && 0 == k )            printf ( "����" );
      else                                                                                               printf ( "����" );
      print ( bt->key[k] ); printf ( "\n" );
      printBTree ( bt->child[k], depth + 1, 0 == k, false, leftmosts, rightmosts ); //�ݹ��������
   }
}




