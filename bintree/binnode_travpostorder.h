template <typename T> template <typename VST> //Ԫ�����͡�������
void BinNode <T>::travPost( VST& visit ) { //��������������㷨ͳһ���
   switch ( rand() % 2 ) { //�˴������ѡ���������ԣ�������ѡ��
      case 1 : travPost_I( this, visit ); break; //������
      default : travPost_R( this, visit ); break; //�ݹ��
   }
}




