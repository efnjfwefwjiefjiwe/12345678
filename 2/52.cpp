#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll w, h, n;
int main() {
    cin >> w >> h >> n;
    ll l = 0;
    ll r = 1e18 + 1;
    ll m = 0;
    ll vertical = 0;
    ll gorizontal = 0;
    while (r - l > 1) {
        m = (r + l) / 2;
        vertical = m / h;
        gorizontal = m / w;
        if (vertical == 0) {
            l = m;
        } else if (n % vertical == 0 && gorizontal >= n / vertical) {
            r = m;
        } else if (n % vertical!= 0 && gorizontal >= n / vertical + 1) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << r << endl;
    return 0;
}
