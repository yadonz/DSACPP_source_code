static Rank hashCode( char c ) { return (Rank)c; } //�ַ�
static Rank hashCode( int k ) { return (Rank)k; } //�����Լ���������
static Rank hashCode( long long i ) { return (Rank)( ( i >> 32 ) + (int)i ); }
static Rank hashCode( char s[] ) { //�����ַ�����ѭ����λɢ���루cyclic shift hash code��
   Rank n = strlen( s ); Rank h = 0; //ɢ����
   for ( Rank i = 0; i < n; i++ ) { //�������ң��������ÿһ�ַ�
      h = ( h << 5 ) | ( h >> 27 ); //����5λ������32������27λ��Ϊ�Ŷ���ͨ�������λ�йأ�
      h += s[i]; //�ۼ��ϵ�ǰ�ַ��Ĺ���
   }
   return h; //������õ�ɢ���룬ʵ���Ͽ�����Ϊ���Ƶġ�����ʽɢ���롱
} //32�ӽ���26���ʴ˷��������Ӣ���ַ������������ĵ������ַ�����������Ӧ�ĵ���



