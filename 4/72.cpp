#include <bits/stdc++.h>
using namespace std;
int q ( int x ) {
  int po = x ;
  bool p = true ;
  for (int e = 2 ; x >= e * e and p ; e ++ ) {
    if ( x % e == 0 ) {
      p = false ;
      po = e ;
    }
  }
  return po ;
}
struct Pair {
  int n , k ;
} ;
int main ( ) {
  int t ;
  cin >> t ;
  vector < Pair > g ( t ) ;
  for ( int e = 0 ; t > e ; e ++ ) {
    cin >> g[e].n >> g[e].k ;
  }
  for ( int e = 0 ; t > e ;e ++ ) {
    long long int s = 0 ;
    if( g[e].n % 2 == 0 ){
    s = g[e].n + 2 * g[e].k ;
  }
  else {
    s = g[e].n + 2 * ( g[e].k - 1 ) + q( g[e].n ) ;
  }
  cout << s << endl ;
  }
return 0 ;
}
