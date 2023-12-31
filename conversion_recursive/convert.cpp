void convert ( Stack<char>& S, __int64 n, int base ) { //整数n的1<base<=16进制打印（递归版）
   static char digit[] = "0123456789ABCDEF"; //数位符号，如有必要可相应扩充
   if ( 0 < n ) { //在尚有余数之前，反复地
      S.push ( digit[n % base] ); //逆向记录当前最低位，再
      convert ( S, n / base, base ); //通过递归得到所有更高位
   }
} //新进制下由高到低的各数位，自顶而下保存于栈S中




