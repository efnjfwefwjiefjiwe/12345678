#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
int n,k;
int cnt = 0;
int cntproverka = 0;
vector<int>perestanovka;
vector<bool>naxodits(10);
bool ok(){
    for (int i = 0; n > i; ++i){
        if (perestanovka[i] == i + 1){
            ++cntproverka;
        }
    }
    if(cntproverka == k){
        cntproverka = 0;
        return true;
    }
    else{
        cntproverka = 0;
        return false;
    }
}
void bt(int i){
    if(i == n){
        if(ok()){
            ++cnt;
            return;
        }
        return;
    }
    for(int e = 1; n >= e; e++){
        if(naxodits[e] == false){
            naxodits[e] = true;
            perestanovka.push_back(e);
            bt(i + 1);
            naxodits[e] = false;
            perestanovka.pop_back();
        }
    }
}
int main(){
    cin >> n >> k;
    bt(0);
    cout << cnt << endl;
    return 0;
}
