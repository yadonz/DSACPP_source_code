void trim ( const char exp[], Rank& lo, Rank& hi ) { //删除exp[lo, hi]不含括号的最长前缀、后缀
   while ( ( lo <= hi ) && ( exp[lo] != '&#40;' ) && ( exp[lo] != '&#41;' ) ) lo++; //查找第一个和
   while ( ( lo <= hi ) && ( exp[hi] != '&#40;' ) && ( exp[hi] != '&#41;' ) ) hi--; //最后一个括号
}

Rank divide ( const char exp[], Rank lo, Rank hi ) { //切分exp[lo, hi]，使exp匹配仅当子表达式匹配
   int crc = 1; //crc为[lo, mi]范围内左、右括号数目之差
   while ( ( 0 < crc ) && ( ++lo < hi ) ) //逐个检查各字符，直到左、右括号数目相等，或者越界
      if ( exp[lo] == '&#40;' ) crc ++;
      else if ( exp[lo] == '&#41;' ) crc --;
   return lo;
}

bool paren ( const char exp[], Rank lo, Rank hi ) { //检查表达式exp[lo, hi]是否括号匹配（递归版）
   trim ( exp, lo, hi ); if ( lo > hi ) return true; //清除不含括号的前缀、后缀
   if ( ( exp[lo] != '&#40;' ) || ( exp[hi] != '&#41;' ) ) return false; //首、末字符非左、右括号，则必不匹配
   Rank mi = divide ( exp, lo, hi ); //确定适当的切分点
   return paren ( exp, lo + 1, mi - 1 ) && paren ( exp, mi + 1, hi ); //分别检查左、右子表达式
}




