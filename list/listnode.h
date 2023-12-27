template <typename T> struct ListNode;
template <typename T> using ListNodePosi = ListNode<T>*; //列表节点位置
template <typename T> struct ListNode { //列表节点模板类（以双向链表形式实现）
// 成员
   T data; ListNodePosi<T> pred, succ; //数值、前驱、后继
// 构造函数
   ListNode() {} //针对header和trailer的构造
   ListNode ( T e, ListNodePosi<T> p = NULL, ListNodePosi<T> s = NULL )
      : data( e ), pred( p ), succ( s ) {} //默认构造器
// 操作接口
   ListNodePosi<T> insertAsPred( T const& e ); //紧靠当前节点之前插入新节点
   ListNodePosi<T> insertAsSucc( T const& e ); //紧随当前节点之后插入新节点
};




