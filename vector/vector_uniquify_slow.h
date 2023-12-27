template <typename T> Rank Vector<T>::uniquify() { //有序向量重复元素剔除算法（低效版）
   Rank oldSize = _size, i = 1; //当前比对元素的秩，起始于首元素
   while ( i < _size ) //从前向后，逐一比对各对相邻元素
      _elem[i - 1] == _elem[i] ? remove ( i ) : i++; //若雷同，则删除后者；否则，转至后一元素
   return oldSize - _size; //向量规模变化量，即被删除元素总数
}




