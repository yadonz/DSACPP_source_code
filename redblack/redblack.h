#include "BST/BST.h" //����BSTʵ��RedBlack
template <typename T> class RedBlack : public BST<T> { //RedBlack��ģ����
protected:
   void solveDoubleRed( BinNodePosi<T> x ); //˫������
   void solveDoubleBlack( BinNodePosi<T> x ); //˫������
   Rank updateHeight( BinNodePosi<T> x ); //���½ڵ�x�ĸ߶ȣ���д��
public:
   BinNodePosi<T> insert( const T& e ); //���루��д��
   bool remove( const T& e ); //ɾ������д��
// BST::search()������ӿڿ�ֱ������
};




