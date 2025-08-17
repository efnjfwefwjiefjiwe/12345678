#include <bits/stdc++.h>
using namespace std;
long long int gsd ( long long int x , long long int y ) {
  while( y > 0 ) {
    x = x % y ;
    swap ( x , y ) ;
  }
  return x ;
}
long long int Ot  (vector < long long int > & f ) { 
  if ( f.size ( ) == 1 ) {
    return f[0] ;
  }
  else {
    long long int d = gsd ( f[0] , f[1] ) ;
    bool p = true ;
    for( int r = 2 ; f.size( ) > r and p ; r ++ ) {
      long long int h = gsd ( d , f[r] ) ;
      d = h ;
      if ( h == 1 ) {
        p = false ;
      }
    }
    return d ;
  }
}
long long int Razl ( long long int x ) {
  long long int s = 1 ;
  for ( long long int e = 2 ; x >= e * e ; e ++ ) {
    int cnt = 0 ;
    while ( x % e == 0 ) {
      x = x / e ;
      cnt ++ ;
    }
    if ( cnt != 0 ) {
      e = 2 ;
      s = s * ( cnt + 1 ) ;
    }
  }
  if ( x != 1 ) {
    s = s * 2 ;
  }
  return s ;
}
int main ( ) {
  int n ;
  cin >> n ;
  vector<long long int>a(n);
  for ( int e = 0 ; n > e ; e ++ ) {
    cin >> a[e] ;
  }
  cout << Razl ( Ot ( a ) ) << endl ;
  return 0 ;
}
