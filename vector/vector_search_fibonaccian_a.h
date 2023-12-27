#include "fibonacci/Fib.h" //����Fib������
//Fibonacci�����㷨���汾A��������������������[lo, hi)�ڲ���Ԫ��e��0 <= lo <= hi <= _size
template <typename T> static Rank fibSearch( T* S, T const& e, Rank lo, Rank hi ) {
   //��O(log_phi(n = hi - lo)ʱ�䴴��Fib����
   for ( Fib fib( hi - lo ); lo < hi; ) { //Fib�Ʊ��飻�˺�ÿ��������һ�αȽϡ�������֧
      while ( hi - lo < fib.get() ) fib.prev(); //�Ժ���ǰ˳����ң���̯O(1)��
      Rank mi = lo + fib.get() - 1; //ȷ������Fib(k)-1�����
      if      ( e < S[mi] ) hi = mi; //����ǰ���[lo, mi)��������
      else if ( S[mi] < e ) lo = mi + 1; //�������(mi, hi)��������
      else                  return mi; //��mi������
   } //һ���ҵ����漴��ֹ
   return -1; //����ʧ��
} //�ж������Ԫ��ʱ�����ܱ�֤����������ߣ�ʧ��ʱ���򵥵ط���-1��������ָʾʧ�ܵ�λ��




