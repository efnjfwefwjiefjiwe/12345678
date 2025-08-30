#include<bits/stdc++.h>
using namespace std;
int gsd(int a,int b){
  while(b > 0){
    a = a % b;
    swap(a, b);
  }
  return a;
}
int main(){
  ios::sync_with_stdio(0);
  cout.tie(0), cin.tie(0);
  int t;
  cin >> t;
  vector<int>ot;
  for(int e = 0;t > e; e++){
    int a, b;
    cin >> a >> b;
    ot.push_back(a - gsd(a, b));
  }
  for(auto c : ot){
    cout << c << endl;
  }
  return 0;    
}
