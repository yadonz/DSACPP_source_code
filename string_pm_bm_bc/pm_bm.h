//////////////////////////////////////////////////////////////////////////
// Boyer-Moore�㷨
//////////////////////////////////////////////////////////////////////////
void ShowProgress( String, String,  int,  int );
#define  CARD_CHAR_SET     256   //Cardinality of charactor set
int*     BuildBC( String ); //����Bad Charactor Shift��
int*     suffixes( String );
int*     BuildGS( String ); //����Good Suffix Shift��




