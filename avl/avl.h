#include "BST/BST.h" //����BSTʵ��AVL��
template <typename T> class AVL : public BST<T> { //��BST����AVL��ģ����
public:
   BinNodePosi<T> insert( const T& e ); //���루��д��
   bool remove( const T& e ); //ɾ������д��
   // BST::search()������ӿڿ�ֱ������
};




