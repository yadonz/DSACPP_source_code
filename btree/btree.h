#include "BTNode.h" //引入B-树节点类

template <typename T> class BTree { //B-树模板类
protected:
   Rank _size; //存放的关键码总数
   Rank _m; // B-树的阶次，至少为3——创建时指定，一般不能修改
   BTNodePosi<T> _root; //根节点
   BTNodePosi<T> _hot; // BTree::search()最后访问的非空（除非树空）的节点位置
   void solveOverflow( BTNodePosi<T> ); //因插入而上溢之后的分裂处理
   void solveUnderflow( BTNodePosi<T> ); //因删除而下溢之后的合并处理
public:
   BTree( int m = 3 ) : _m( m ), _size( 0 ) //构造函数：默认为最低的3阶
      { _root = new BTNode<T>(); }
   ~BTree() { if ( _root ) release( _root ); } //析构函数：释放所有节点
   int const order() { return _m; } //阶次
   int const size() { return _size; } //规模
   BTNodePosi<T> & root() { return _root; } //树根
   bool empty() const { return !_root; } //判空
   BTNodePosi<T> search ( const T& e ); //查找
   bool insert ( const T& e ); //插入
   bool remove ( const T& e ); //删除
}; //BTree




