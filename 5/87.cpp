#include<bits/stdc++.h>
using namespace std;
int solve(int a ,int b){
  int c = a - b;
  int s = 1;
  for(int e = 2; c >= e * e; e++){
    if(c % e == 0){
      int cnt = 0;
      while(c % e == 0){
        cnt++;
        c = c / e;
      }
      s = s * (cnt + 1);
      e = 2;
    }
  }
  if(c != 1){
    s = s * 2;
  }
  return s;
}
int main ( ) {
  int t;
  cin >> t;
  vector<int>ot;
  for(int e = 0 ;t > e; e++) {
    int b, a;
    cin >> a >> b;
    if (b > a) {
      swap(a, b);
    }
    ot.push_back(solve(a, b));
  }
  for(auto c : ot) {
    cout << c << endl;
  }
  return 0;    
}
