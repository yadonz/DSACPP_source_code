#include "PQ/PQ.h" //�������ȼ�����ADT
#include "List/List.h" //�����б�
template <typename T> class PQ_List : public PQ<T>, public List<T> { //�����б�ʵ�ֵ����ȼ�����
public:
   PQ_List() { } //Ĭ�Ϲ���
   PQ_List ( T* E, int n ) { while ( 0 < n-- ) insertAsFirst ( ( E[n] ) ); } //��������
   void insert ( T e ) { insertAsLast ( e ); } //ֱ�ӽ���Ԫ�ز�������ĩβ
   T getMax() { return selectMax()->data; } //ȡ�����ȼ���ߵ�Ԫ��
   T delMax() { return remove ( selectMax() ); } //ɾ�����ȼ���ߵ�Ԫ��
}; //PQ_List




