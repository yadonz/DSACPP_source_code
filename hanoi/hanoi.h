#include <cstdio>
#include <cstdlib>

#include "_share/util.h"
#include "stack/stack.h"

using Disk = int;

void displayHanoi();
void hanoi ( int, Stack<Disk>&, Stack<Disk>&, Stack<Disk>& );
void move ( Stack<Disk>&, Stack<Disk>& );

extern int nDisk; //��������
extern Stack<int> Sx, Sy, Sz; //������ջģ���������ӣ�ÿ�����ӵİ뾶��������ʾ




