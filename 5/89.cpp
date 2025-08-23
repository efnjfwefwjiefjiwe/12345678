#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cout.tie(0), cin.tie(0);
  int t;
  cin >> t;
  vector<int>ot;
  for (int e = 0; t > e; e++) {
    int k, n;
    cin >> k >> n;
    if(k > n){
      swap(k, n);
    }
    for(int cnt = 1; k >= cnt; cnt++){
      cout <<(n / k) * cnt <<" ";
    }
    cout << "" << endl;
  }
  for(auto c : ot) {
    cout << c << endl;
  }
  return 0;    
}
