#include "List/List.h" //以列表为基类，派生出栈模板类
template <typename T> class Stack: public List<T> { //将列表的首/末端作为栈底/顶
public: //原有接口一概沿用
   void push ( T const& e ) { insertAsLast ( e ); } //入栈：等效于将新元素作为列表的末元素插入
   T pop() { return remove ( last() ); } //出栈：等效于删除列表的末元素
   T& top() { return last()->data; } //取顶：直接返回列表的末元素
};




