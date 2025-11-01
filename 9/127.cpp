#include<bits/stdc++.h>
using namespace std;
using ld = long double;
using ll = long long;
vector<int>number(1, 1);
int n;
void multiplication() {
    int cnt = 0;
    int cnt2 = 0;
    int j = number.size();
    for (int i = 0; j > i; ++i) {
        cnt2 = number[i];
        number[i] = (((number[i] * 3) + cnt) % 10);
        cnt = ((cnt2 * 3)  + cnt) / 10;
    }
    if (cnt != 0) {
        number.push_back(cnt);
    }
    return;
}
void addition() {
    int cnt = 1;
    int cnt2 = 0;
    int j = number.size();
    for (int i = 0; j > i && cnt != 0; ++i) {
        cnt2 = number[i];
        number[i] = ((number[i] + cnt) % 10);
        cnt = (cnt2 + cnt) / 10;
    }
    if (cnt != 0) {
        number.push_back(cnt);
    }
    return;
}
int main() {
    cin >> n;
    for (int i = 1; n >= i; ++i) {
        multiplication();
    }
    addition();
    for (int i = number.size() - 1; i > - 1; --i) {
        cout << number[i];
    }
    return 0;
}
