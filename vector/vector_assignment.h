template <typename T> Vector<T>& Vector<T>::operator= ( Vector<T> const& V ) { //深复制
   if ( _elem ) delete [] _elem; //释放原有内容
   copyFrom ( V._elem, 0, V.size() ); //整体复制
   return *this; //返回当前对象的引用，以便链式赋值
}




