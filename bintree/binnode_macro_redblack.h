#define IsBlack(p) ( ! (p) || ( RB_BLACK == (p)->color ) ) //�ⲿ�ڵ�Ҳ�����ڽڵ�
#define IsRed(p) ( ! IsBlack(p) ) //�Ǻڼ���
#define BlackHeightUpdated(x) ( /*RedBlack�߶ȸ�������*/ \
   ( stature( (x).lc ) == stature( (x).rc ) ) && \
   ( (x).height == ( IsRed(& x) ? stature( (x).lc ) : stature( (x).lc ) + 1 ) ) \
)




