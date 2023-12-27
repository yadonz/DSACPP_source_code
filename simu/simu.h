#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <climits>

#include "queue/queue.h" //引入队列
#include "Customer.h" //顾客类

int bestWindow ( Queue<Customer> window[], Rank nWin );
void printCustomer ( Customer c );
void displayProgress ( Queue<Customer> window[], Rank nWin, Rank now );
void simulate ( Rank, Rank );

extern int delay; //控制进度显示的延迟




