#include<bits/stdc++.h>
using namespace std;
vector< long long int>number( 1e6 + 1 ,1e7);
void RESH ( ) {
    for (long long int e = 2; 1e6 >= e; e++){
        if (number[e] == 1e7 ) {
            number[e] = e;
            for (long long int c = e * e; 1e6 >= c; c = c + e){
                number[c] = min(number[c], e);
            }

        }
    }
}
string  solve (long long int a) {
    long long int l = 0;
    long long int r = 1e6 + 1;
    while ( r - l > 1) {
        long long int m = (r + l) / 2;
        if (a > m * m ){
            l = m;
        }
        else {
            r = m;
        }
    }
    if (r * r == a and number[r] == r and r > 1) {
       return "YES";
    }
    else {
       return "NO";
    }
}
int main(){
    int n;
    cin >> n;
    vector<string>ot;
    RESH();
    for (int e = 0; n > e; e++) {
        long long int a;
        cin >> a;
        ot.push_back(solve(a));
    }
    for (int e = 0; ot.size() > e; e++) {
        cout << ot[e] << endl;
    
    }
}