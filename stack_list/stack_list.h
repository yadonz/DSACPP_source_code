#include "List/List.h" //���б�Ϊ���࣬������ջģ����
template <typename T> class Stack: public List<T> { //���б����/ĩ����Ϊջ��/��
public: //ԭ�нӿ�һ������
   void push ( T const& e ) { insertAsLast ( e ); } //��ջ����Ч�ڽ���Ԫ����Ϊ�б��ĩԪ�ز���
   T pop() { return remove ( last() ); } //��ջ����Ч��ɾ���б��ĩԪ��
   T& top() { return last()->data; } //ȡ����ֱ�ӷ����б��ĩԪ��
};




