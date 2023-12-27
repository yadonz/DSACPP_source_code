/******************************************************************************************
 * Test of Graph
 ******************************************************************************************/
#include "Graph_test.h"

/******************************************************************************************
 * ������v�����㡢e���߹��ɵ����ͼ
 ******************************************************************************************/
template <typename Tv, typename Te> //�������͡�������
void randomGraph ( GraphMatrix<Tv, Te> & g, Rank n, Rank e ) { //assert: 0 < e(e-1) <= v
   while ( ( g.n < n ) || ( g.e < e ) ) { //�������
      if ( g.n < n ) { //����
         if ( dice ( 100 ) < 65 ) { //65%���ʲ��붥��
            Tv vertex = ( Tv ) ( 'A' + dice ( 26 ) );
            g.insert ( vertex );
         } else { //35%����ɾ������
            if ( 1 > g.n ) continue;
            int v = dice ( g.n );
            Tv x = g.remove ( v );
         }
      }
      if ( ( 1 < g.n ) && ( g.e < e ) ) { //��
         if ( dice ( 100 ) < 65 ) { //65%���ʲ����
            int v = dice ( g.n ), j = dice ( g.n ); Te e = dice ( ( Te ) 3 * n );
            if ( g.exists ( v, j ) ) {
            } else {
               g.insert ( e, e, v, j );
            }
         } else { //35%����ɾ����
            int v = dice ( g.n ), j = dice ( g.n );
            if ( g.exists ( v, j ) ) {
               Te e = g.remove ( v, j );
            } else {
            }
         }
      }
   }
   for ( Rank v = 0; v < n; v++ ) g.vertex ( v ) = 'A' + (Tv) v;
}

/******************************************************************************************
 * �������У��ļ��ض����е���ͼ
 ******************************************************************************************/
void importGraph ( GraphMatrix<char, int> & g ) {
   int n; scanf ( "%d\n", &n );
   for ( int v = 0; v < n; v++ ) { //����v������
      char vertex; scanf ( "%c", &vertex );
      g.insert ( vertex );
   }
   for ( int v = 0; v < n; v++ )
      for ( int j = 0; j < n; j++ ) { //�����
         int edge; scanf ( "%d", &edge );
         if ( 0 > edge ) continue;
         g.insert ( edge, edge, v, j );
      }
}

/******************************************************************************************
 * ͼ�ṹ��ͳһ����
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
   if ( 2 > argc ) { printf ( "Usage: %s -random <n> <e> | -import <n> <e> < <path>\a\a\n", argv[0] ); return -1; }
   // -import < ..\..\_input\graph.prim.0009+0028.txt  ..\..\_output\Graph_Matrix\graph.prim.0009+0028.txt
   // -random 67 543 > ..\..\_output\Graph_Matrix\graph.random.0067+0543.txt
   srand((unsigned int)time(NULL)); //�������
   //srand( 31415926 ); //�̶����ӣ������ӣ������ã�
   GraphMatrix<char, int> g;
   if ( !strcmp ( "-random", argv[1] ) )
      randomGraph<char, int> ( g, atoi ( argv[2] ), atoi ( argv[3] ) ); //�������ַ���ţ���Ϊ����Ȩ��
   else if ( !strcmp ( "-import", argv[1] ) )
      importGraph ( g ); //�������У��ļ��ض����е���ͼ
   else return -1;
   g.bfs ( 0 );
   g.pfs ( 0, BfsPU<char, int>() );
   g.dfs ( 0 );
   g.pfs ( 0, DfsPU<char, int>() );
   Stack<char>* ts = g.tSort ( 0 );
   g.bcc ( 0 );
   g.prim ( 0 );
   g.pfs ( 0, PrimPU<char, int>() );
   g.dijkstra ( 0 );
   g.pfs ( 0, DijkPU<char, int>() );
   return 0;
}




