// ����Hanoi���򣬽�����Sx�ϵ�nֻ���ӣ���������Sy��ת���Ƶ�����Sz��
void hanoi ( int n, Stack<Disk>& Sx, Stack<Disk>& Sy, Stack<Disk>& Sz ) {
   if ( n > 0 )   { //û������ʣ��ʱ�����ٵݹ�
      hanoi ( n - 1, Sx, Sz, Sy ); //�ݹ飺��Sx�ϵ�n - 1ֻ���ӣ�����Sz��ת���Ƶ�Sy��
      move ( Sx, Sz ); //ֱ�ӣ���Sx�����һֻ���ӣ��Ƶ�Sz��
      hanoi ( n - 1, Sy, Sx, Sz ); //�ݹ飺��Sy�ϵ�n - 1ֻ���ӣ�����Sx��ת���Ƶ�Sz��
   }
}




