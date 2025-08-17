#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
int main() {
  int n;
  cin >> n;
  long long  int s = 0;
  vector<int>p(n + 1);
  for(int d = 1; n >= d; d++) {
    cin >> p[d];
    if(p[d] > 10) {
      s = s + p[d] - 10;
    }
  }
  cout << s << endl;
  return 0;
}
