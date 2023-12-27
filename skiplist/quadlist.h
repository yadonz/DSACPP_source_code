#include "QuadListNode.h" //����Quadlist�ڵ���

template <typename T> struct Quadlist { //�����б�
   Rank _size; //��ģ
   QNodePosi<T> header, trailer; //ͷ�ڱ���β�ڱ�
   void init(); //��ʼ��
   int clear(); //������нڵ�
   Quadlist() { init(); } //����
   ~Quadlist() { clear(); delete header; delete trailer; } //����
   T remove( QNodePosi<T> p ); //ɾ�����Ϸ���λ��p���Ľڵ㣬���ر�ɾ���ڵ����ֵ
   QNodePosi<T> insert( T const& e, QNodePosi<T> p, QNodePosi<T> b = NULL ); //��e��Ϊp�ĺ�̡�b�����ڲ���
   void traverse( void (* ) ( T& ) ); //�������ڵ㣬����ʵʩָ������������ָ�룬ֻ����ֲ��޸ģ�
   template <typename VST> void traverse ( VST& ); //����
}; //Quadlist




