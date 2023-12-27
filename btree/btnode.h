#include "vector/vector.h"
template <typename T> struct BTNode;
template <typename T> using BTNodePosi = BTNode<T>*; //B-树节点位置

template <typename T> struct BTNode { //B-树节点模板类
// 成员（为简化描述起见统一开放，读者可根据需要进一步封装）
   BTNodePosi<T> parent; //父节点
   Vector<T> key; //关键码向量
   Vector<BTNodePosi<T>> child; //孩子向量（总比关键码多一个）
// 构造函数
   BTNode() { parent = NULL; child.insert( NULL ); } //无关键码节点
   BTNode( T e, BTNodePosi<T> lc = NULL, BTNodePosi<T> rc = NULL ) {
      parent = NULL; key.insert( e ); //作为根节点只有一个关键码，以及
      child.insert( lc ); if ( lc ) lc->parent = this; //左孩子
      child.insert( rc ); if ( rc ) rc->parent = this; //右孩子
   }
};




