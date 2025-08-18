#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int m;
    cin >> m;
    vector <long long int>g;
    for (long long int s = m; s > 0; s = (s - 1) & m){
        g.push_back(s);
    }
    cout << 0 << endl ;
    for (int u = g.size() - 1; u > - 1; u = u - 1){
     cout << g[u] << endl;
    }
    return 0;
}
