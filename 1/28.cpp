#include<bits/stdc++.h>
using namespace std;
int main () {
int n ;
cin >> n ;
long long int cntii = 0 ;
long long int cnt = 0 ;
vector < int > g ( n + 1 ) ;
    for ( int x = 1 ; n >= x ; x ++ ) {
        cin >> g [ x ] ;
    }
    for ( int w = 1 ; n >= w ; w ++ ) {
        if( g [ w ] == w ) {
            cntii++;
        }
        else if ( w == g [ g [ w ] ] ) {
            cnt ++ ;
        }
    }
cout << ( cntii * ( cntii - 1 ) ) / 2 + cnt / 2 << endl ;
return 0 ;
}
