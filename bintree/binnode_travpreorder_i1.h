template <typename T, typename VST> //Ԫ�����͡�������
void travPre_I1( BinNodePosi<T> x, VST& visit ) { //��������������㷨��������#1��
   Stack<BinNodePosi<T>> S; //����ջ
   if ( x ) S.push( x ); //���ڵ���ջ
   while ( !S.empty() ) { //��ջ���֮ǰ����ѭ��
      x = S.pop(); visit( x->data ); //���������ʵ�ǰ�ڵ㣬��ǿպ��ӵ���ջ����Ϊ���Һ���
      if ( HasRChild( *x ) ) S.push( x->rc );
      if ( HasLChild( *x ) ) S.push( x->lc );
   }
}




