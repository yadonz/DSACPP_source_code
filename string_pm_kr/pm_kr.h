#define M 97 //ɢ�б��ȣ���Ȼ���ﲢ����Ҫ��ش洢ɢ�б�����ȡ������������Խ������еĿ���
#define R 10 //���������ڶ����ƴ���ȡ2������ʮ���ƴ���ȡ10������ASCII�ַ�����ȡ128��256
#define DIGIT(S, i) ( (S)[i] - '0' )  //ȡʮ���ƴ�S�ĵ�iλ����ֵ���ٶ�S�Ϸ���
using HashCode = __int64; //��64λ����ʵ��ɢ����
bool check1by1 ( char* P, char* T, size_t i );
HashCode prepareDm ( size_t m );
void updateHash ( HashCode& hashT, char* T, size_t m, size_t k, HashCode Dm );




