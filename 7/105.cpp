#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m;
vector<vector<int>>a_z(21);
vector<bool>best_a;
vector<bool>used_a(21, false);
vector<bool>pr_z(21, false);
int k = 1e7;
void bt(int i, int cnt, int sum) {
    if (i == m + 1) {
        if (sum == (n * (n + 1)) / 2 && cnt < k) {
            best_a = used_a;
            k = cnt;
        }
        return;
    }
    bt(i + 1, cnt, sum);
    used_a[i] = true;
    vector<int>back;
    for (int e = 0; a_z[i].size() > e; ++e) {
        if (!pr_z[a_z[i][e]]) { 
            pr_z[a_z[i][e]] = true;
            sum = sum + a_z[i][e];
            back.push_back(a_z[i][e]);
        }
    }
    bt(i + 1, cnt + 1, sum);
    for (int e = 0; back.size() > e; ++e) {
        pr_z[back[e]] = false;
    }
    used_a[i] = false;
}
int main() {
    cin >> n >> m;
    bool p = true;
    for (int i = 1; n >= i; ++i) {
        int cnt = 0;
        for (int j = 1; m >= j; ++j) {
            int pr = 0;
            cin >> pr;
            if (pr == 1) {
                ++cnt;
            } else {
                a_z[j].push_back(i);
            }
        }
        if (cnt == m) {
            p = false;
        }
    }
    if (p) { 
        bt(1, 0, 0);
        cout << k << endl;
        for (int e = 1; m >= e; ++e) {
            if (best_a[e]) {
                cout << e << " ";
            }
        }
    } else {
        cout << "Impossible" << endl;
    }
    return 0;
}
