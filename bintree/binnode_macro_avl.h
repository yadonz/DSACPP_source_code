#define Balanced( x ) ( stature( ( x ).lc ) == stature( ( x ).rc ) ) //����ƽ������
#define BalFac( x ) ( stature( ( x ).lc ) - stature( ( x ).rc ) ) //ƽ������
#define AvlBalanced( x ) ( ( -2 < BalFac( x ) ) && ( BalFac( x ) < 2 ) ) // AVLƽ������




