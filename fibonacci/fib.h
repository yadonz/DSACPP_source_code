class Fib { //Fibonacci������
private:
   Rank f, g; //f = fib(k - 1), g = fib(k)����Ϊint�ͣ��ܿ�ͻ���ֵ���
public:
   Fib ( Rank n ) //��ʼ��Ϊ��С��n����СFibonacci��
   { f = 1; g = 0; while ( g < n ) next(); } //fib(-1), fib(0)��O(log_phi(n))ʱ��
   Rank get()  { return g; } //��ȡ��ǰFibonacci�O(1)ʱ��
   Rank next() { g += f; f = g - f; return g; } //ת����һFibonacci�O(1)ʱ��
   Rank prev() { f = g - f; g -= f; return g; } //ת����һFibonacci�O(1)ʱ��
};




