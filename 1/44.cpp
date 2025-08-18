#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
int main() {
  long long int p;
  cin >> p;
  vector<int>fac(11, 1);
  for(int u = 2; 10 >= u; u++) {
    fac[u] = fac[u - 1] * u;
  }
  int cnt = 0;
  for(int c = 10; c > 0; c = c - 1){
    cnt = p / fac[c] + cnt;
    p = p - (p / fac[c]) * fac[c];
  }  
  cout << cnt << endl;
return 0;
}
