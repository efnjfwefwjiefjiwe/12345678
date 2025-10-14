#include<bits/stdc++.h>
using namespace std;
int dp[1001];
int number[1001];
int main() {
    int n;
    cin >> n;
    for (int i = 1; n >= i; ++i) {
        cin >> number[i];
    }
    for (int i = 1; n >= i; ++i) {
        dp[i] = 1;
        for (int j = 1; i > j; ++j) {
            if (number[i] > number[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int max_len = 1;
    for (int i = 1; n >= i; ++i) {
        max_len = max(max_len, dp[i]);
    }
    cout << max_len << endl;
    return 0;
}
