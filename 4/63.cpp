#include<bits/stdc++.h>
using namespace std;
long long int gsd(long long int a, long long int b){
  while(b > 0) {
    a = a % b;
    swap(a, b);
  }
  return a;
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<long long int>g(n + 1, 0);
    vector<long long int>k(m);
    for (int e = 1; n >= e; e++) {
       cin >> g[e];
    }
    for (int e = 0; m > e; e++) {
       cin >> k[e];
    }
    stable_sort(g.rbegin(),g.rend());
    long long int u = 0;
    for (int e = 0; n - 2 >= e and u != 1 ; e++){
        u = gsd (u, g[e]-g[e+1]);
    } 
    for (int e = 0; m > e; e++) {
        cout << gsd(k[e]+g[n-1], u) << endl;
    }
    return 0;
}
