#include "List/List.h" //�����б�
#include "Entry/Entry.h" //�������
#include "Quadlist.h" //����Quadlist
#include "Dictionary/Dictionary.h" //����ʵ�

template <typename K, typename V> //key��value
//����Dictionary�ӿڵ�Skiplistģ���ࣨ��������Ԫ��֮��ɱȽϴ�С��
struct Skiplist : public Dictionary<K, V>, public List< Quadlist< Entry<K, V> >* > {
   Skiplist() { insertAsFirst( new Quadlist< Entry<K, V> > ); }; //����Ϊ�գ�Ҳ��һ����б�
   QNodePosi< Entry<K, V> > search( K ); //�ɹؼ����ѯ����
   Rank size() const { return empty() ? 0 : last()->data->_size; } //��������
   Rank height() { return List::size(); } //��� == #Quadlist
   V* get( K ); //��ȡ
   bool put(K, V); //���루Skiplist��������ظ����ʱ�Ȼ�ɹ���
   bool remove ( K ); //ɾ��
};




