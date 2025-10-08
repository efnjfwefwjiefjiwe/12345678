#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
int main() {
    long double a;
    cin >> a;
    int z = 2000;
    long double l = 0.000000;
    long double r = 100000.00000;
    while (z > 0) {
        long double m=(l+r)/2;
        if (a > m + m * m * m * m) {
            l = m;
        } else {
            r = m;
        }
        z = z - 1;
    }
    cout << fixed << setprecision(11) << r * r << endl;
    return 0;
}
