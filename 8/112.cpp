#include<bits/stdc++.h>
using namespace std;
vector<int>dp(256, 1);
int m;
bool cmp(string a, string b) {
    return a.size() < b.size();
}
bool check_pref (int a, int b, vector<string> &s) {
    if (s[b].size() < s[a].size()) { 
        for (int i = 0; s[b].size() > i; ++i) {
            if (s[b][i] != s[a][i] ) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}
int main() {
    cin >> m;
    vector<string>s(m);
    for (int i = 0; m > i; ++i) {
        cin >> s[i];
    }
    stable_sort(s.begin(), s.end(), cmp);
    int max_len = 0;
    for (int i = 0; m > i; ++i) {
        for (int j = 0; i > j; ++j) {
            if (check_pref(i, j, s)) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        max_len = max(max_len, dp[i]);
    }
    cout << max_len << endl;
    return 0;
}
