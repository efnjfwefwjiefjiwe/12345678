#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
int main ( ) {
  int a , b , c ;
  cin >> a >> b >> c;
  if (a > b){
    swap(a,b);
  }
  if (b > c){
    swap(b,c);
  }
  if (a > b){
    swap(a,b);
  }
  if (a - b == b - c){
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
    return 0 ;
}
