#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<int>prime(14999982,0);
const ll ni =15 * 1e6 + 1;
vector<ll>number(ni, 1e7);
void resh(){
    for(ll e = 2; ni > e; e++){
        if(number[e]==1e7){
            prime[e] = 0;
            number[e] = e;
            for(ll r = e * e; ni > r; r = r + e){
                number[r] = min(number[r], e);
            }
        }
    }
}
ll gsd(ll a, ll b){
    while(b > 0){
        a = a % b;
        swap(a, b);
    }
    return a;
}
void solve(ll x){
    while(x != 1){
        prime[number[x]]++;
        ll h = number[x];
        while(x % h == 0){
            x = x / h;
        }
    }
}
int main(){                                                                           
    ios::sync_with_stdio(0);   
    cout.tie(0),cin.tie(0);        
    resh();
    int n;
    cin >>n;
    vector<ll>num(n);
    ll u = 0;
    for(int e = 0; n > e; e++){
        cin >>num[e];
        u = gsd(u, num[e]);
    }
    int cnt = 0;
    for(int e = 0; n > e; e++){
        num[e] = num[e] / u;
        if(num[e] == 1){
            ++cnt;
        }
    }
    if(cnt == n){
        cout << -1 << endl;
    }
    else{
        for(int e = 0; n > e; e++){
            solve(num[e]);
        }
        int maxi = 0;
        for(auto c = prime.begin(); c != prime.end(); ++c ){
            maxi = max(maxi, *c);
        }
        cout <<n - maxi <<endl;
    }
    }
