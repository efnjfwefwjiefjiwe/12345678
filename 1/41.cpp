#include <bits/stdc++.h>
using namespace std;
int main( ) {
  int n;
  cin >> n;
  vector<long long int>g(n);
  for(int r = 0; n > r; r++){
    cin >> g[r];
  }
  stable_sort(g.begin(), g.end());
  long long int cnt = 1;
  long long  int s = 0;
  for(int u = 1; n > u; u++){
    if (g[u] != g[u-1]) {
      s = s + cnt * n - cnt * cnt;
      cnt = 1;
    }
    else {
      cnt++;
    }
  }
  if(s != 0) {
    s = s + cnt * (n - cnt);
  }
  cout << s / 2 << endl;
  return 0;
}
