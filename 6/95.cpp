#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
vector<int>backpack;
vector<int>bestbackpack;
ll bestsumP = 0;
vector<int>w(21);
vector<int>p(21);
int n;ll W;
void calc(ll sumW, ll sumP){
    if(!(sumW > W || sumP < bestsumP)){
        if((sumP > bestsumP) || (backpack.size() < bestbackpack.size() && sumP == bestsumP) || (backpack < bestbackpack && sumP == bestsumP && backpack.size() == bestbackpack.size())){
            bestsumP = sumP;
            bestbackpack = backpack; 
        }
        return;
    }
    return;
}
void bt (int i,ll sumW, ll sumP){
    if (n == i){
        calc(sumW,sumP);
        return;
    }
    bt(i + 1,sumW,sumP);
    backpack.push_back(i + 1);
    bt(i + 1,sumW + w[i + 1], sumP + p[i + 1]);
    backpack.pop_back();
}
int main(){
    cin >> n >> W;
    for(int i = 1; i <= n; ++i){
        cin >> w[i] >> p[i];
    }
    bt(0,0,0);
    cout << bestbackpack.size() << " " << bestsumP << " ";
    for ( int i = 0 ; bestbackpack.size() > i; i++){
        cout << bestbackpack[i] << " ";
    }
    return 0;
}
