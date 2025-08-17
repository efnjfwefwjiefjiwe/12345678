#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
int main () {
  long long int n;
  cin >> n;
  int s = 0;
  int f = 0;
  while(n > s) {
    s = f + s;
    f++;
  }
  cout << f - 1 << endl;
  return 0;
}
