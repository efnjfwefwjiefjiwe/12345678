#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int m;
ll n;
struct mx {
    ll m[101][101];
    void one(int k) {
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < k; ++j) {
                if (i == j) {
                    m[i][j] = 1;
                } else {
                    m[i][j] = 0;
                }
            }
        }
    }
    void binder(int k) {
        int poz = 1;
        for (int j = 0; j < k; ++j) {
            bool p = true;
            for (int i = 0; i < k; ++i) {
                if (poz == i && p) {
                    m[poz][j] = 1;
                    ++poz;
                    p = false;
                } else {
                    m[i][j] = 0;
                }
            }
        }
        m[0][k - 1] = 1;
        m[k - 1][k - 1] = 1;
    }
};
const ll mod = 1e9 + 7;
ll sum(ll a, ll b) {
    return (a + b) % mod;
}
ll mult(ll a, ll b) {
    return (a * b) % mod;
}
mx res, c, untiled;
void m_m(mx &a, mx &b) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            untiled.m[i][j] = 0;
            for (int k = 0; k < m; ++k) {
                untiled.m[i][j] = sum(untiled.m[i][j], mult(a.m[i][k], b.m[k][j]));
            }
        }
    }
}
void bin_pov(ll deg) {
    res.one(m);
    c.binder(m);
    while (deg != 0) {
        if (deg % 2 == 1) {
            m_m(res, c);
            memcpy(res.m, untiled.m, sizeof(untiled));
        }
        deg /= 2;
        m_m(c, c);
        memcpy(c.m, untiled.m, sizeof(untiled));
    }
}
int main(){
    cin >> n >> m;
    if (m > n) {
        cout << 1 << endl;
        return 0;
    }
    if (m == n) {
        cout << 2 << endl;
        return 0;
    }
    bin_pov(n - m);
    ll num = 0;
    for (int i = 0; i < m - 1; ++i) {
        num = sum(num, res.m[i][m - 1]);
    }
    cout << sum(num,  mult(res.m[m - 1][m - 1], 2)) << endl;
    return 0;
}
