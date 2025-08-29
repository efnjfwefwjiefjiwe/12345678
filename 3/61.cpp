#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(int k, ll x){
    ll l = 0;
    ll r = 2 * k ;
    while(r - l > 1){
        ll m = (r + l) / 2;
        ll s = 0;
        if (m > k){
            s = (k * (2 * m + 1 - k) - (m - k) * (m - k + 1)) / 2;
        }
        else{
            s = (m * (m + 1)) / 2;
        }
        if(x > s){
            l = m;

        }
        else{
            r = m;
        }
    }
    if (r < 2 * k){
        cout << r <<endl;
    }
    else{
        cout<< r - 1<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cout.tie(0),cin.tie(0);
    int t;
    cin >>t;
    for(int e = 0; t > e; e++){
        int k;ll x;
        cin>>k>>x;
        solve(k,x);
    }
}
