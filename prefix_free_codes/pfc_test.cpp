int main ( int argc, char* argv[] ) { //PFC���롢�����㷨ͳһ�������
   PFCForest* forest = initForest(); //��ʼ��PFCɭ��
   PFCTree* tree = generateTree ( forest ); release ( forest ); //����PFC������
   PFCTable* table = generateTable ( tree ); //��PFC������ת��Ϊ�����
   for ( int i = 1; i < argc; i++ ) { //���������д����ÿһ���Ĵ�
      Bitmap codeString; //�����Ʊ��봮
      int n = encode ( table, codeString, argv[i] ); //�����ݱ�������ɣ�����Ϊn��
      decode ( tree, codeString, n ); //���ñ��������Գ���Ϊn�Ķ����Ʊ��봮���루ֱ�������
   }
   release ( table ); release ( tree ); return 0; //�ͷű����������
} //release()�����ͷŸ��ӽṹ�����㷨��ֱ�ӹ�ϵ������ʵ����������




