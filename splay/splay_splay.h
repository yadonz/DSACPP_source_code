template <typename NodePosi> inline //�ڽڵ�*p��*lc������Ϊ�գ�֮�佨���������ӹ�ϵ
void attachAsLC( NodePosi lc, NodePosi p ) { p->lc = lc; if ( lc ) lc->parent = p; }

template <typename NodePosi> inline //�ڽڵ�*p��*rc������Ϊ�գ�֮�佨�������ң��ӹ�ϵ
void attachAsRC( NodePosi p, NodePosi rc ) { p->rc = rc; if ( rc ) rc->parent = p; }

template <typename T> //Splay����չ�㷨���ӽڵ�v���������չ
BinNodePosi<T> Splay<T>::splay( BinNodePosi<T> v ) { // vΪ��������ʶ�����չ�Ľڵ�λ��
   if ( !v ) return NULL; BinNodePosi<T> p; BinNodePosi<T> g; //*v�ĸ������游
   while ( ( p = v->parent ) && ( g = p->parent ) ) { //���¶��ϣ�������*v��˫����չ
      BinNodePosi<T> gg = g->parent; //ÿ��֮��*v����ԭ���游��great-grand parent��Ϊ��
      if ( IsLChild( *v ) )
         if ( IsLChild( *p ) ) { // zig-zig
            attachAsLC( p->rc, g ); attachAsLC( v->rc, p );
            attachAsRC( p, g ); attachAsRC( v, p );
         } else { //zig-zag
            attachAsLC( v->rc, p ); attachAsRC( g, v->lc );
            attachAsLC( g, v ); attachAsRC( v, p );
         }
      else
         if ( IsRChild ( *p ) ) { //zag-zag
            attachAsRC( g, p->lc ); attachAsRC( p, v->lc );
            attachAsLC( g, p ); attachAsLC( p, v );
         } else { //zag-zig
            attachAsRC( p, v->lc ); attachAsLC( v->rc, g );
            attachAsRC( v, g ); attachAsLC( p, v );
         }
      if ( !gg ) v->parent = NULL; //��*vԭ�ȵ����游*gg�����ڣ���*v����ӦΪ����
      else //����*gg�˺�Ӧ����*v��Ϊ����Һ���
         ( g == gg->lc ) ? attachAsLC( v, gg ) : attachAsRC( gg, v );
      updateHeight( g ); updateHeight( p ); updateHeight( v );
   } //˫����չ����ʱ������g == NULL����p���ܷǿ�
   if ( p = v->parent ) { //��p����ǿգ����������һ�ε���
      if ( IsLChild( *v ) ) { attachAsLC( v->rc, p ); attachAsRC( v, p ); }
      else                  { attachAsRC ( p, v->lc ); attachAsLC ( p, v ); }
      updateHeight( p ); updateHeight( v );
   }
   v->parent = NULL; return v;
} //����֮��������ӦΪ����չ�Ľڵ㣬�ʷ��ظýڵ��λ���Ա��ϲ㺯����������




