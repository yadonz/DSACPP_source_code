void placeQueens ( Rank N ) { //N皇后算法（迭代版）：采用试探/回溯的策略，借助栈记录查找的结果
   Stack<Queen> solu; //存放（部分）解的栈
   Queen q ( 0, 0 ); //从原点位置出发
   do { //反复试探、回溯
      if ( N <= solu.size() || N <= q.y ) { //若已出界，则
         q = solu.pop(); q.y++; //回溯一行，并继续试探下一列
      } else { //否则，试探下一行
         while ( ( q.y < N ) && ( -1 != solu.find ( q ) ) ) //通过与已有皇后的比对
            { q.y++; nCheck++; } //尝试找到可摆放下一皇后的列
         if ( N > q.y ) { //若存在可摆放的列，则
            solu.push ( q ); //摆上当前皇后，并
            if ( N <= solu.size() ) nSolu++; //若部分解已成为全局解，则通过全局变量nSolu计数
            q.x++; q.y = 0; //转入下一行，从第0列开始，试探下一皇后
         }
      }
   } while ( ( 0 < q.x ) || ( q.y < N ) ); //所有分支均已或穷举或剪枝之后，算法结束
}




