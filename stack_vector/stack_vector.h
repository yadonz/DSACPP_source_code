#include "Vector/Vector.h" //������Ϊ���࣬������ջģ����
template <typename T> class Stack: public Vector<T> { //����������/ĩ����Ϊջ��/��
public: //ԭ�нӿ�һ������
   void push ( T const& e ) { insert ( e ); } //��ջ����Ч�ڽ���Ԫ����Ϊ������ĩԪ�ز���
   T pop() { return remove ( size() - 1 ); } //��ջ����Ч��ɾ��������ĩԪ��
   T& top() { return ( *this ) [size() - 1]; } //ȡ����ֱ�ӷ���������ĩԪ��
};




