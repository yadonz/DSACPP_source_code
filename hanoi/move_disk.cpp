
#include "hanoi.h"

void move ( Stack<Disk>& Sa, Stack<Disk>& Sb ) { //��Sa��������������Sb����
   Sb.push ( Sa.pop() ); //pop a disk from stack A and push it into stack B
   displayHanoi();
}




