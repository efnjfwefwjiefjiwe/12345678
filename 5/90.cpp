#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

int ip,jp;
const int n = 1e6;
const int n2 = 1e7;
ll best_number = 1e6 + 1;
ld min_trivial = 1000000000.000001;
vector<int>number(n + 1, n2);


ll sum_deviser () {
    ll sum = 0;
    for(int i = 1;  ip >= i * i; ++i) {
        if ( ip % i == 0 && ip / i != i) {
            sum = sum + i + ip / i;
        }
        else if(ip % i == 0 && ip / i == i) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    cin >>  ip >> jp;
    for (; jp >= ip; ++ip) {
        ll num = sum_deviser();
        ld trivial = ld((num - ip)) / ld(ip);
        if (trivial < min_trivial) {
            min_trivial = trivial;
            best_number = ip;
        }
    }
    cout << best_number << endl;
    return 0;
}
