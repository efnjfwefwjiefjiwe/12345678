#include<bits/stdc++.h>
using namespace std ;
int a , b , d ;
vector < int > p ;
vector < int > s ;
vector < int > del ( 1 ) ;
int gsd ( int & a , int & b ) {
  while ( b > 0 ) {
    a = a % b ;
    swap ( a , b ) ;
  }
  return a ;
}
void f ( ) {
  for ( int e = 2 ; d >= e * e ; e ++ ) {
    if (d % e == 0 ) {
      int cnt = 0 ;
      while ( d % e == 0 ) {
        cnt ++ ;
        d = d / e ;
      }
      p.push_back( e ) ;
      s.push_back( cnt ) ;
      e = 2 ;
    }
  }
  if ( d != 1 ) {
    p.push_back( d ) ;
    s.push_back( 1 ) ;
    d = 2 ;
  }
}
void dp ( ) {
  for ( int e = 0 ; p.size ( ) > e ; e ++ ) {
    int h = p[e] ;
    int j = del.size( ) ;
    for (int y = 1 ; s[e] >= y ; y ++ ) {
      for ( int q = 0 ; j > q ; q ++ ) {
        del.push_back ( h * del[q] ) ;
      }  
      h = h * p[e] ;
    }
  }
  stable_sort (  del.begin( ) , del.end( ) ) ;
}
int solve ( int l , int r ) {
  int a = - 1 ;
  int b = del.size ( ) ;
  while ( b - a > 1 ) {
    int m = ( a + b ) / 2 ;
    if ( r > del[m] ) {
      a = m ;
    }
    else {
      b = m ;
    }
  }
  if ( del.size( ) > b ) {
    if ( del[b] == r ) {
      return r ;
    }
    else if ( a != - 1 and del[a] >= l ) {
      return del[a] ;
    }
    else {
      return - 1 ;
    }
  }
  else {
    if ( del[del.size ( ) - 1 ] >= l ) {
      return del[del.size ( ) - 1 ] ;
    }
    else{
      return - 1 ;
    }
  }
}
int main ( ) {
  del[0] = 1 ; 
  vector < int > ot ;
  cin >> a >> b ;
  d = gsd ( a , b ) ;
  f ( ) ; dp ( ) ;
  int n ;
  cin >> n ;
  for ( int e = 0 ; n > e ; e ++ ) {
    int l , r ;
    cin >> l >> r ;
    ot.push_back ( solve ( l , r ) ) ;
  }
  for ( auto c : ot ) {
    cout << c << endl ;
  }
  return 0 ;    
}
