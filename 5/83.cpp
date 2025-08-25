#include<bits/stdc++.h>
using  namespace std;
int solve (int d){
    int s = 1;
    for (int e = 2; d >= e * e; e++){
        if ( d % e == 0){
            while( d % e == 0){
                d = d / e;
                ++s;
            }
            e = 2;
        }
    }
    if( d != 1 ){
        ++s;
    }
    return s;
}
int main(){
    ios::sync_with_stdio(0);
    cout.tie(0), cin.tie(0);
    int t;
    cin >> t;
    for ( int e = 0; t > e; e++){
        int a,b;
        cin >>a >>b;
        if ( b % a == 0 and b >= a){
           cout<< solve(b / a)<<endl;
        }
        else{
            cout << 0 <<endl;
        }
    }

}
