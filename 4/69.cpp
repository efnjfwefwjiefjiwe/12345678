#include<bits/stdc++.h>
using namespace std;
vector < long long int > prime ;
vector < bool > number ( 40000 + 1 , true ) ;
void f ( ) {
    for ( int e = 2 ; 40000 >= e ; e ++ ) {
        if ( number[e] ) {
                prime.push_back( e ) ;
                for ( long long int  c = e * e ; 40000 >= c ; c = c + e ) {
                        number[c] = false ;
                }
        }
    }

}
int b ( int d ) {
    int l = - 1 ;
    int r = prime.size( ) ;
    while ( r - l > 1 ) {
        int m = ( r + l ) / 2 ;
        if ( d > prime[m] ) {
            l = m ;
        }
        else {
            r = m ;
        }
    }
    return prime[r] ;
}
long long int solve ( int d ) {
    long long int r = b ( d + 1 ) ;
    long long int e = 0 ;
    e = r * b ( r + d ) < r * r * r ? r * b ( r + d ) : r  *  r  *  r ; 
    return e ;
}
int main ( ) {
    int t ;
    cin >> t ;
    vector < long long  int > ot ;
    f();
    for ( int e = 0 ; t > e ; e ++ ) {
        int d ;
        cin >> d ;
        ot.push_back ( solve( d ) ) ;
    }
    for ( int y = 0 ; ot.size( ) > y ; y ++ ) {
        cout << ot[y] << endl ;
    }
    return 0;
}
