/******************************************************************************************
 * PFC����ʹ�õ����ݽṹ
 ******************************************************************************************/
#include "BinTree/BinTree.h" //��BinTreeʵ��PFC��
using PFCTree = BinTree<char>; //PFC��

#include "Vector/Vector.h" //��Vectorʵ��PFCɭ��
using PFCForest = Vector<PFCTree*>; //PFCɭ��

#include "Bitmap/Bitmap.h" //ʹ��λͼ�ṹʵ�ֶ����Ʊ��봮
#include "Skiplist/Skiplist.h" //����Skiplistʽ�ʵ�ṹʵ��
using PFCTable = Skiplist<char, char*>; //PFC�����������ʽΪ��(key = �ַ�, value = ���봮)

#define  N_CHAR  (0x80 - 0x20) //ֻ���ǿɴ�ӡ�ַ�




