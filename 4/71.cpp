#include <bits/stdc++.h>
using namespace std;
int main(){
  int n ;
  cin >> n ;
  int max = 1 ;
  for ( int e = 2 ; 16 >= e ; e ++ ) {
    if ( n % ( ( ( 1 << e ) - 1 ) * ( 1 << e - 1 ) ) == 0 ) {
      max = ( ( ( 1 << e ) - 1 ) * ( 1 << e - 1 ) ) ;
    }
  }
  cout << max << endl ;
  return 0 ;
}
