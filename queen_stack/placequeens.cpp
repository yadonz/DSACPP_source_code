void placeQueens ( Rank N ) { //N�ʺ��㷨�������棩��������̽/���ݵĲ��ԣ�����ջ��¼���ҵĽ��
   Stack<Queen> solu; //��ţ����֣����ջ
   Queen q ( 0, 0 ); //��ԭ��λ�ó���
   do { //������̽������
      if ( N <= solu.size() || N <= q.y ) { //���ѳ��磬��
         q = solu.pop(); q.y++; //����һ�У���������̽��һ��
      } else { //������̽��һ��
         while ( ( q.y < N ) && ( -1 != solu.find ( q ) ) ) //ͨ�������лʺ�ıȶ�
            { q.y++; nCheck++; } //�����ҵ��ɰڷ���һ�ʺ����
         if ( N > q.y ) { //�����ڿɰڷŵ��У���
            solu.push ( q ); //���ϵ�ǰ�ʺ󣬲�
            if ( N <= solu.size() ) nSolu++; //�����ֽ��ѳ�Ϊȫ�ֽ⣬��ͨ��ȫ�ֱ���nSolu����
            q.x++; q.y = 0; //ת����һ�У��ӵ�0�п�ʼ����̽��һ�ʺ�
         }
      }
   } while ( ( 0 < q.x ) || ( q.y < N ) ); //���з�֧���ѻ���ٻ��֦֮���㷨����
}



