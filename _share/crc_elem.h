template <typename T> struct Crc { //���������ۼ�T�����������������ܺͣ����Ա�У����󼯺�
   T& c;
   Crc ( T& crc ) : c ( crc ) {}
   virtual void operator() ( T& e ) { c += e; } //����T��ֱ�����
};




