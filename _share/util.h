#include <iostream>
using namespace std;

/******************************************************************************************
 * ���ԡ���ʾ��С����
 ******************************************************************************************/
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <typeinfo>
#include "comparator.h"

#include "checkOrder_Elem.h"
#include "checkOrder_list.h"
#include "checkOrder_vector.h"

#include "double_Elem.h"
#include "increase_Elem.h"
#include "hailstone_Elem.h"
#include "increase_list.h"
#include "increase_vector.h"

#include "crc_Elem.h"
#include "crc_list.h"
#include "crc_vector.h"

#include "rand.h" //�����

#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))

#if defined(DSA_DEBUG) //���뿪�أ����Ƶ������
#define DSA(x)  { x } //���
#else
#define DSA(x) //�����
#endif




