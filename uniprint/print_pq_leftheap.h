/******************************************************************************************
 * 打印输出PQ_LeftHeap
 ******************************************************************************************/
template <typename T> //元素类型
void UniPrint::p ( PQ_LeftHeap<T> & lh ) { //引用
   p ( ( BinTree<T>& ) lh );
}




