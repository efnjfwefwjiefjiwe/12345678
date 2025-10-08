#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
int n, k;
bool ok(int m, vector<int>&stoila) {
    int u = k - 1;
    int p = 0;
    for (int i = 1; n > i && u > 0; ++i) {
        if (stoila[i] - stoila[p] >= m) {
            --u;
            p = i;
        }
    }
    if (u == 0) {
        return true;
    } else {
        return false;
    }
}
int main() {
    cin >> n >> k;
    vector<int>stoila(n);
    for (int i = 0; n > i; ++i) {
        cin >> stoila[i];
    }
    int l = 0;
    int r = 1e9 + 1;
    while (r - l > 1) {
        int m = (r + l) / 2;
        if (ok(m, stoila)) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << l << endl;
    return 0;
}
