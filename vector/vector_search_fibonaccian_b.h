#include "fibonacci/Fib.h" //����Fib������
//Fibonacci�����㷨���汾B��������������������[lo, hi)�ڲ���Ԫ��e��0 <= lo <= hi <= _size
template <typename T> static Rank fibSearch( T* S, T const& e, Rank lo, Rank hi ) {
   for ( Fib fib( hi - lo ); lo < hi; ) { //Fib�Ʊ��飻�˺�ÿ��������һ�αȽϡ�������֧
      while ( hi - lo < fib.get() ) fib.prev(); //�Ժ���ǰ˳����ң���̯O(1)��
      Rank mi = lo + fib.get() - 1; //ȷ������Fib(k) - 1�����
      ( e < S[mi] ) ? hi = mi : lo = mi + 1; //�ȽϺ�ȷ������ǰ���[lo, mi)�����(mi, hi)
   } //�����Ѿ��ҵ���Ҳ������ǰ��ֹ
   return lo - 1; //���ˣ�[lo]Ϊ����e����С�ߣ���[lo-1]��Ϊ������e�������
} //�ж������Ԫ��ʱ����������ߣ�����ʧ��ʱ������ʧ�ܵ�λ��




