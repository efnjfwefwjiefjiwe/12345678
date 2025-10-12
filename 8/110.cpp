#include<bits/stdc++.h>
using namespace std;
int P[1001][2];
int main() {
    int n, k;
    cin >> n >> k;
    P[1][0] = k - 1;
    P[1][1] = 0;
    for (int i = 2; n >= i; ++i) {
        P[i][1] = P[i - 1][0];
        P[i][0] = (k - 1) * (P[i - 1][0] + P[i - 1][1]);
    }
    cout << P[n][0] + P[n][1] << endl;
    return 0;
}
