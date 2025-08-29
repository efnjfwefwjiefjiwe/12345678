#include<bits/stdc++.h>
using namespace std;
int gsd(int a, int b){
    while(b > 0){
        a = a % b;
        swap(a, b);
    }
    return a;
}
int main(){
    ios::sync_with_stdio(0);
    cout.tie(0),cin.tie(0);
    int n;
    cin >>n;
    multiset<int>h;
    for(int e = 0; n * n > e; e++){
        int d;
        cin >>d;
        h.insert(d);
    }
    vector<int>ot;
    while(h.size() > 0){
        auto c = h.end();
        int hi = *--c;
        for(int e = 0; ot.size() > e; e++){
            if(h.find(gsd(hi,ot[e]))!=h.end()){
                h.erase(h.find(gsd(hi, ot[e])));
                h.erase(h.find(gsd(hi, ot[e])));
            }
            }
            ot.push_back(hi);
            h.erase(h.find(hi));
    }
    for(int e = 0; ot.size() > e; e++){
        cout<<ot[e]<<" ";
    }
    return 0;
}
