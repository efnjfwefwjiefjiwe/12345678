#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
int main() {
  int n;
  cin >> n;
  vector<int>g(n + 1);
  vector<int>podshet(n + 1);
  for(int e = 1; n >= e; e++){
    cin >> g[e];
    podshet[g[e]]++;
  }
  bool f = true;
  for(int z = 1; n >= z and f; z++){
    if(podshet[z] == 0 or podshet[z] > 1){
      f = false;
    }
  }
  if(f) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
