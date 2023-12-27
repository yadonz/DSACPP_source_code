#include "BTNode.h" //����B-���ڵ���

template <typename T> class BTree { //B-��ģ����
protected:
   Rank _size; //��ŵĹؼ�������
   Rank _m; // B-���Ľ״Σ�����Ϊ3��������ʱָ����һ�㲻���޸�
   BTNodePosi<T> _root; //���ڵ�
   BTNodePosi<T> _hot; // BTree::search()�����ʵķǿգ��������գ��Ľڵ�λ��
   void solveOverflow( BTNodePosi<T> ); //����������֮��ķ��Ѵ���
   void solveUnderflow( BTNodePosi<T> ); //��ɾ��������֮��ĺϲ�����
public:
   BTree( int m = 3 ) : _m( m ), _size( 0 ) //���캯����Ĭ��Ϊ��͵�3��
      { _root = new BTNode<T>(); }
   ~BTree() { if ( _root ) release( _root ); } //�����������ͷ����нڵ�
   int const order() { return _m; } //�״�
   int const size() { return _size; } //��ģ
   BTNodePosi<T> & root() { return _root; } //����
   bool empty() const { return !_root; } //�п�
   BTNodePosi<T> search ( const T& e ); //����
   bool insert ( const T& e ); //����
   bool remove ( const T& e ); //ɾ��
}; //BTree



