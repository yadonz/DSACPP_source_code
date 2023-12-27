struct Queen { //�ʺ���
   Rank x, y; //�ʺ��������ϵ�λ������
   Queen ( int xx = 0, int yy = 0 ) : x ( xx ), y ( yy ) {};
   bool operator== ( Queen const& q ) const { //�����еȲ��������Լ�ⲻͬ�ʺ�֮����ܵĳ�ͻ
      return    ( x == q.x ) //�г�ͻ����һ�����ʵ�����ᷢ������ʡ�ԣ�
                || ( y == q.y ) //�г�ͻ
                || ( x + y == q.x + q.y ) //�����Խ��߳�ͻ
                || ( x - y == q.x - q.y ); //�ط��Խ��߳�ͻ
   }
   bool operator!= ( Queen const& q ) const { return ! ( *this == q ); } //���ز��Ȳ�����
};




