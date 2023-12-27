#include "BST/BST.h" //����BSTʵ��Splay
template <typename T> class Splay : public BST<T> { //��BST������Splay��ģ����
protected:
   BinNodePosi<T> splay( BinNodePosi<T> v ); //���ڵ�v��չ����
public:
   BinNodePosi<T>& search( const T& e ); //���ң���д��
   BinNodePosi<T> insert( const T& e ); //���루��д��
   bool remove( const T& e ); //ɾ������д��
};




