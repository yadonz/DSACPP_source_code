#include "PQ/PQ.h" //�������ȼ�����ADTʵ�ֵ�
#include "Vector/Vector.h" //�������ؼ̳л��ƣ���������
template <typename T> struct PQ_ComplHeap : public PQ<T>, public Vector<T> { //��ȫ�����
   PQ_ComplHeap() {} //Ĭ�Ϲ���
   PQ_ComplHeap( T* A, Rank n ) { copyFrom( A, 0, n ); heapify( _elem, n ); } //��������
   void insert( T ); //���ձȽ���ȷ�������ȼ����򣬲������
   T getMax(); //��ȡ���ȼ���ߵĴ���
   T delMax(); //ɾ�����ȼ���ߵĴ���
}; // PQ_ComplHeap
template <typename T> void heapify( T* A, Rank n ); // Floyd�����㷨
template <typename T> Rank percolateDown( T* A, Rank n, Rank i ); //����
template <typename T> Rank percolateUp( T* A, Rank i ); //����





