#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<long int>b(n + 1);
  vector<long long int>cc(n + 1);
  vector<long long int>bc(n + 1);
  vector<long long int>ac(n + 1);
  for(int e = 1; n >= e; e++) {
    long long int d;
    cin >> d;
    ac[d]++;
  }
  for(int u = 1; n >= u; u++) {
    cin >> b[u];
  }
  for(int e = 1; n >= e; e++) {
    long long int d;
    cin >> d;
    cc[d]++;
  }
  long long int s=0;
  for(int e = 1; n >= e; e++) {
    bc[b[e]] = bc[b[e]] + cc[e];
  }
  for(int y = 1; n >= y; y++) {
    s = s + ac[y]  *bc[y];
  }
  cout << s << endl;
  return 0;
}
