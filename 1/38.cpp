#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
int abc(int x) {
  if(x >= 0) {
    return x;
  }
  else {
    return 0 - x;
  }
}
int main() {
  int a, b, c;
  cin >> a >> b >>c;
  if (c % 2 == 0) { 
    if ( a == b or b == 0 - a){
      cout << "=" << endl;
    }
    else if (abc(a) > abc(b)) {
      cout << ">" << endl;
    }
    else{
      cout << "<" << endl;
    }
  }
  else {
    if (a == b) {
      cout << "=" << endl;
    }
    else if (a > b) {
      cout << ">" << endl;
    }
    else {
      cout << "<" << endl;
    }
  }
  return 0;
}
