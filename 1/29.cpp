#include<bits/stdc++.h>
using namespace std ;
int main ( ) {
int n ;
cin >> n ;
vector < long long int > gop( n ) ;
vector< long long int > podshet ( 200 ) ;
for( int e=0 ; n > e ; e++ ){
    cin >> gop [ e ] ;
    podshet [ ( gop [ e ] + 200 ) % 200 ] ++ ;
}
long long int cnt = 0 ;
for ( int g = 0 ; podshet.size( ) > g ; g ++ ) {
    cnt = cnt + ( podshet [ g ] * ( podshet [ g ] - 1 ) ) / 2 ;
}
cout << cnt << endl ;
return 0 ;
}
