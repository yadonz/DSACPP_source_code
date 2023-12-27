#include <iostream>
using namespace std;
#include <cstdio>
#include <cstdlib>
#include "stack/stack.h" //ջ
#include "queen.h" //����ʺ���

typedef enum {Continuous, Step} RunMode;

extern RunMode runMode; //����ģʽ
extern int nSolu; //�������
extern int nCheck; //���Ե��ܴ���

void placeQueens ( Rank );
void displayRow ( Queen& q, Rank );
void displayProgress ( Stack<Queen>& S, Rank );




