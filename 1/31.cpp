#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
struct Pair {
  string s;int t;
};
bool cmp (Pair a, Pair b) {
  return a.t < b.t;
}
int main() {
  int n;
  cin >> n;
  vector<Pair>g(n);
  for(int e = 0; n > e; e++) {
    cin >> g[e].s >> g[e].t;
  }
  stable_sort(g.begin(), g.end(), cmp);
  cout << g[n - 2].s << endl;
    return 0 ;
}
