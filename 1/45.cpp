#include<bits/stdc++.h>
using namespace std;
struct Pair {
    long long int i ; long long int x ;
};
bool cmp (Pair a, Pair b) {
    return a.i < b.i;
}
int main(){
    long long int k; long long int n;
    cin >> n >> k;
    vector<Pair>g(n);
    vector<long long int>p (n, k / n);
    k = k - (k / n) * n;
    for (long long int e = 0; n > e; e++){
        cin >> g[e].i;
        g[e].x = e;
    }
    stable_sort (g.begin() , g.end(), cmp);
    for ( long long int e = 0 ; k > e and g.size( ) > e; e++) {
        ++p[g[e].x];
    }
    for (long long int e = 0; n > e; e++){
        cout << p[e] <<endl;
    }
}
