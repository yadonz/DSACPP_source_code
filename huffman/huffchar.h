#define  N_CHAR  (0x80 - 0x20) //���Կɴ�ӡ�ַ�Ϊ��
struct HuffChar { //Huffman�������ַ�
   char ch; unsigned int weight; //�ַ���Ƶ��
   HuffChar ( char c = '&#94;', unsigned int w = 0 ) : ch ( c ), weight ( w ) {};
// �Ƚ������е�����������һ���������в��䣩
   bool operator< ( HuffChar const& hc ) { return weight > hc.weight; } //�˴������С�ߵ�
   bool operator== ( HuffChar const& hc ) { return weight == hc.weight; }
};




