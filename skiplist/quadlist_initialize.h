template <typename T> void Quadlist<T>::init() { //Quadlist��ʼ��������Quadlist����ʱͳһ����
   header = new QNode<T>; //����ͷ�ڱ��ڵ�
   trailer = new QNode<T>; //����β�ڱ��ڵ�
   header->succ = trailer; header->pred = NULL; //�غ��������ڱ�
   trailer->pred = header; trailer->succ = NULL; //�غ��������ڱ�
   header->above = trailer->above = NULL; //����ĺ���ÿ�
   header->below = trailer->below = NULL; //�����ǰ���ÿ�
   _size = 0; //��¼��ģ
} //��˹���������������κ�ʵ�ʵĽڵ㣬����ʱ�������������໥����




