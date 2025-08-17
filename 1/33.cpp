#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
int main() {
  int n, k;
  cin >> n >> k;
  cout << 50 * k * (n + 1) * n + ((k + 1) * k * n) / 2 << endl;
  return 0;
}
