#include "Entry/Entry.h"
template <typename T> struct QNode;
template <typename T> using QNodePosi = QNode<T>*; //��ת��ڵ�λ��
template <typename T> struct QNode { //�����ڵ�
   T entry; //�������
   QNodePosi<T> pred, succ, above, below; //ǰ������̡����ڡ�����
   QNode( T e = T(), QNodePosi<T> p = NULL, QNodePosi<T> s = NULL,
          QNodePosi<T> a = NULL, QNodePosi<T> b = NULL ) //������
      : entry( e ), pred( p ), succ( s ), above( a ), below( b ) {}
   QNodePosi<T> insert( T const& e, QNodePosi<T> b = NULL ); //��e��Ϊ��ǰ�ڵ�ĺ�̡�b�����ڲ���
};




