#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <climits>

#include "queue/queue.h" //�������
#include "Customer.h" //�˿���

int bestWindow ( Queue<Customer> window[], Rank nWin );
void printCustomer ( Customer c );
void displayProgress ( Queue<Customer> window[], Rank nWin, Rank now );
void simulate ( Rank, Rank );

extern int delay; //���ƽ�����ʾ���ӳ�




