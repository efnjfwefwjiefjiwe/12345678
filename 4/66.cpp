#include<bits/stdc++.h>
using namespace std;
int gsd(int b, int d){
    while(d > 0){
        b = b % d;
        swap(b, d);
    }
    return b;
}
int solve(int b, int d){
    int j = gsd(b, d);
    if (b % (d / j) == 0) {
    return b / (d / j) - 1;
    }
    else{
        return b / (d / j);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cout.tie(0), cin.tie(0);
    int n;
    cin >> n;
    for(int e = 0; n > e; e++) {
        int b,d;
        cin >> b >> d;
        cout << solve(b, d) << endl;
    }
    return 0;
}
