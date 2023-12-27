#include "Vector/Vector.h" //�������ؼ̳л��ƣ���������
#include "DEPQ/DEPQ.h" //�������ȼ�����ADTʵ�ֵ�

template <typename T> class SMMH : public DEPQ<T>, public Vector<T> { //Symmetric Min-Max Heap
protected:
   //void heapify ( Rank n ); //Floyd's heapification
public:
   SMMH() { insert((T) -1); } //initialized with a dummy root
   void insert( T ); //insert an element (duplicates accepted)
   T getMin() { return _elem[1]; }
   T getMax() { return _size < 3 ? _elem[1] : _elem[2]; }
   T delMin();
   T delMax();
}; //SMMH





