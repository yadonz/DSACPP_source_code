Operator optr2rank ( char op ) { //�������ת������
   switch ( op ) {
      case '&#43;' : return ADD; //��
      case '&#45;' : return SUB; //��
      case '&#42;' : return MUL; //��
      case '&#47;' : return DIV; //��
      case '&#94;' : return POW; //�˷�
      case '&#33;' : return FAC; //�׳�
      case '&#40;' : return L_P; //������
      case '&#41;' : return R_P; //������
      case '&#92;0': return EOE; //��ʼ������ֹ��
      default  : exit ( -1 ); //δ֪�����
   }
}

char priority ( char op1, char op2 ) //�Ƚ����������֮������ȼ�
{ return pri[optr2rank ( op1 ) ][optr2rank ( op2 ) ]; }




