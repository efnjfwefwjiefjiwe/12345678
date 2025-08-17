#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
int main() {
  long double a, b;
  cin >> a >> b;
  cout << fixed << setprecision(10) << (a / 100) * b << endl;
  return 0;
}
