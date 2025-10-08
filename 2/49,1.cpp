#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<set>
#include <iomanip> 
int main() {
  long double a;
  int n;
  cin >> a;
  long double r = 100000.000000;
  int z = 120;
  while (z > 0) {
    long double ri = 100000.000000;
    int d = 100;
    while (d > 0) {
      ri = ri - (ri * ri - r) / (2 * ri);
      d = d - 1;
    }
    r = r - (r * r + ri - a) / (2 * r + 1 / (2 * ri));
    z = z - 1;
  }
cout << fixed << setprecision(20) << r << endl;
return 0;
}
