#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
struct Pair {
  long long int a; int b;
};
bool cmp (Pair d, Pair f) {
  if(d.a == f.a) {
    return d.b < f.b;
  }
  else {
    return d.a < f.a;
  }
}
int main() {
  int n, k;
  cin >> n >> k;
  vector<Pair>z(n);
  for (int e = 0; n > e; e++) {
  cin >> z[e].a >> z[e].b;
  }
  sort(z.begin(), z.end(), cmp);
  long long int cnt = k;
  bool p = true;
  for(int w = 0; n > w and p; w++){
    if(cnt >= z[w].a){
      cnt = cnt + z[w].b;
    }
    else{
      p = false;
    }
  }
  cout << cnt << endl;
  return 0;
}
