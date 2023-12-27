template <typename T> template <typename VST> //Ԫ�����͡�������
void BinNode <T>::travLevel( VST& visit ) { //��������α����㷨
   Queue<BinNodePosi<T>> Q; Q.enqueue( this ); //���븨�����У����ڵ����
   while ( !Q.empty() ) { //�ڶ����ٴα��֮ǰ����������
      BinNodePosi<T> x = Q.dequeue(); visit( x->data ); //ȡ�����׽ڵ㲢����֮
      if ( HasLChild( *x ) ) Q.enqueue( x->lc ); //�������
      if ( HasRChild( *x ) ) Q.enqueue( x->rc ); //�Һ������
   }
}




