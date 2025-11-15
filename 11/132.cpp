#include<bits/stdc++.h>

using namespace std;

using ll = long long;

struct mx {
    __int128 m[2][2];
};

ll n;
ll mod = 1e9 + 7;
mx c, ans, until;

void mx_mul(mx a, mx b) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            until.m[i][j] = 0;
            for (int p = 0; p < 2; ++p) {
                until.m[i][j] = ll(__int128(until.m[i][j] + a.m[i][p] * b.m[p][j])) % mod;
            }
        }
    }
}

void bin_pov(ll len) {
    while (len > 0) {
        if (len % 2 == 1) {
            mx_mul(ans, c);
            memcpy(ans.m, until.m, sizeof(until.m));
        }
        len /= 2;
        mx_mul(c, c);
        memcpy(c.m, until.m, sizeof(until.m));
    }
}

int main(){
    cin >> n;

    c.m[0][0] = 1;
    c.m[1][0] = 1;
    c.m[0][1] = 1;
    c.m[1][1] = 0;

    ans.m[0][0] = 1;
    ans.m[1][0] = 0;
    ans.m[0][1] = 0;
    ans.m[1][1] = 1;
    
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    bin_pov(n - 2);

    cout << ll(__int128(ans.m[0][0] + ans.m[0][1])) % mod << endl;

    return 0;
}
