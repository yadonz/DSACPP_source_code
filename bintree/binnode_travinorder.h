template <typename T> template <typename VST> //Ԫ�����͡�������
void BinNode<T>::travIn ( VST& visit ) { //��������������㷨ͳһ���
   switch ( rand() % 5 ) { //�˴������ѡ���������ԣ�������ѡ��
      case 1 : travIn_I1( this, visit ); break; //������#1
      case 2 : travIn_I2( this, visit ); break; //������#2
      case 3 : travIn_I3( this, visit ); break; //������#3
      case 4 : travIn_I4( this, visit ); break; //������#4
      default : travIn_R( this, visit ); break; //�ݹ��
   }
}




