#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int cnt = 0;
vector<vector<int>>top_kontaktov(10,vector<int>(2,0));
vector<int>used_top(8 + 1, 0);
bool ok(){
    for(int i = 0; m > i; ++i){
        if (used_top[top_kontaktov[i][0]] == used_top[top_kontaktov[i][1]]){
            return false;
        }
    }
    return true;
}
void bt(int i){
    if(i == n + 1){
        if(ok()){
            ++cnt;
        }
        return;
    }
    for( int  ii = 1; k >= ii; ++ii){
        used_top[i] = ii;
        bt(i + 1);
        used_top[i] = 0;
    }
}
int main(){
    cin >> n >> k >> m;
    for ( int i = 0; m > i; ++i){
        cin >> top_kontaktov[i][0] >> top_kontaktov[i][1];
    }
    bt(1);
    cout << cnt << endl;
}
