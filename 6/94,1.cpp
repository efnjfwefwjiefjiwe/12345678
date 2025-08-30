#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mini = 1e7;
void bt(vector<int>& g, int i, int s1, int s2){
    if(i == g.size() - 1){
        mini = min(mini, abs(s1 - s2));
    }
    else{
      bt(g, i + 1, s1 + g[i + 1], s2);
      bt(g, i + 1, s1 , s2 + g[i + 1]);
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>g(n + 1, 0);
    for(int e = 1; n >= e; e++){
        cin >>g[e];
    }
    int i = 0;
    int s1 = 0;
    int s2 = 0;
    bt(g, i, s1, s2);
    cout<< mini <<endl; 
    return 0;
}
