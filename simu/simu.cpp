void simulate ( Rank nWin, Rank servTime ) { //��ָ����������������ʱ��ģ������ҵ��
   Queue<Customer>* windows = new Queue<Customer>[nWin]; //Ϊÿһ���ڴ���һ������
   for ( Rank now = 0; now < servTime; now++ ) { //���°�֮ǰ��ÿ��һ����λʱ��
      if ( rand() % ( 1 + nWin ) ) { //�¹˿���nWin/(nWin + 1)�ĸ��ʵ���
         Customer c ; c.time = 1 + rand() % 98; //�¹˿͵������ʱ�����ȷ��
         c.window = bestWindow ( windows, nWin ); //�ҳ���ѣ���̣��ķ��񴰿�
         windows[c.window].enqueue ( c ); //�¹˿ͼ����Ӧ�Ķ���
      }
      for ( Rank i = 0; i < nWin; i++ ) //�ֱ���
         if ( !windows[i].empty() ) //���ǿն���
            if ( -- windows[i].front().time <= 0 ) //���׹˿͵ķ���ʱ������һ����λ
               windows[i].dequeue(); //������ϵĹ˿ͳ��У��ɺ�̹˿ͽ���
   } //for
   delete [] windows; //�ͷ����ж��У���ǰ��~List()���Զ���ն��У�
}




