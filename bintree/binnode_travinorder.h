template <typename T> template <typename VST> //元素类型、操作器
void BinNode<T>::travIn ( VST& visit ) { //二叉树中序遍历算法统一入口
   switch ( rand() % 5 ) { //此处暂随机选择以做测试，共五种选择
      case 1 : travIn_I1( this, visit ); break; //迭代版#1
      case 2 : travIn_I2( this, visit ); break; //迭代版#2
      case 3 : travIn_I3( this, visit ); break; //迭代版#3
      case 4 : travIn_I4( this, visit ); break; //迭代版#4
      default : travIn_R( this, visit ); break; //递归版
   }
}




