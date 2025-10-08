#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll w, h, n;
int main() {
    cin >> w >> h >> n;
    ll l = 0;
    ll r = 1e18 + 1;
    ll m = 0;
    ll x = 0;
    ll y = 0;
    while (r - l > 1) {
        m = (r + l) / 2;
        x = m / h;
        y = m / w;
        if (x == 0) {
            l = m;
        } else if (n % x == 0 && y >= n / x) {
            r = m;
        } else if (n % x != 0 && y >= n / x + 1) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << r << endl;
    return 0;
}
