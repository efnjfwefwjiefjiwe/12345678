#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct tri{
    int t, l, r;
};
int main(){
    int n;
    cin >> n;
    ll cnt = 0;
    vector<tri>g(n);
    for (int e = 0; n > e; e++){
        cin >>g[e].t>>g[e].l>>g[e].r;
    }
    for (int e = 0; n > e; e++){
        for (int go = e + 1; n > go; go++){
            if(not(g[go].l > g[e].r or g[e].l > g[go].r) and not(g[e].l == g[go].r and (g[e].t > 2 or g[go].t % 2 == 0)) and  not(g[e].r == g[go].l and (g[go].t > 2 or g[e].t % 2 == 0)) ){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
} 
