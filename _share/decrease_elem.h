template <typename T> struct Decrease //函数对象：递减一个T类对象
   {  virtual void operator() ( T& e ) { e--; }  }; //假设T可直接递减或已重载--




