void convert ( Stack<char>& S, __int64 n, int base ) { //����n��1<base<=16���ƴ�ӡ���ݹ�棩
   static char digit[] = "0123456789ABCDEF"; //��λ���ţ����б�Ҫ����Ӧ����
   if ( 0 < n ) { //����������֮ǰ��������
      S.push ( digit[n % base] ); //�����¼��ǰ���λ����
      convert ( S, n / base, base ); //ͨ���ݹ�õ����и���λ
   }
} //�½������ɸߵ��͵ĸ���λ���Զ����±�����ջS��




