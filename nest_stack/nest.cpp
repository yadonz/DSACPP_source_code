bool paren ( const char exp[], Rank lo, Rank hi ) { //表达式括号匹配检查，可兼顾三种括号
   Stack<char> S; //使用栈记录已发现但尚未匹配的左括号
   for ( Rank i = lo; i <= hi; i++ ) /* 逐一检查当前字符 */
      switch ( exp[i] ) { //左括号直接进栈；右括号若与栈顶失配，则表达式必不匹配
         case '&#40;': case '&#91;': case '&#123;': S.push ( exp[i] ); break;
         case '&#41;': if ( ( S.empty() ) || ( '&#40;' != S.pop() ) ) return false; break;
         case '&#93;': if ( ( S.empty() ) || ( '&#91;' != S.pop() ) ) return false; break;
         case '&#125;': if ( ( S.empty() ) || ( '&#123;' != S.pop() ) ) return false; break;
         default: break; //非括号字符一律忽略
   }
   return S.empty(); //最终栈空，当且仅当匹配
}




