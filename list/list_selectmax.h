template <typename T> //����ʼ��λ��p��n��Ԫ����ѡ�������
ListNodePosi<T> List<T>::selectMax( ListNodePosi<T> p, Rank n ) {
   ListNodePosi<T> max = p; //������ݶ�Ϊ�׽ڵ�p
   for ( ListNodePosi<T> cur = p; 1 < n; n-- ) //���׽ڵ�p�������������ڵ���һ��max�Ƚ�
      if ( !lt( ( cur = cur->succ )->data, max->data ) ) //����ǰԪ�ز�С��max����
         max = cur; //�������Ԫ��λ�ü�¼
   return max; //�������ڵ�λ��
}




