int bestWindow ( Queue<Customer> windows[], Rank nWin ) { //Ϊ�µ��˿�ȷ����Ѷ���
   Rank minSize = windows[0].size(), optiWin = 0; //���Ŷ��У����ڣ�
   for ( Rank i = 1; i < nWin; i++ ) //�����д�����
      if ( minSize > windows[i].size() ) //��ѡ��
         { minSize = windows[i].size(); optiWin = i; } //���������
   return optiWin; //����
}




