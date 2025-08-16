#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n ;
int k ;
cin >> n >> k;
bool p = true;
bool d = true;
int cnt = 0 ;
    while ( p ) {
        if ( k > cnt ) {
            if ( n % 200 == 0 ) {
                n= n / 200 ;
            }
            else if ( cnt == k - 1 and n % 200 != 0 ) {
                d = false ;
                p = false ;
            }
            else {
                cnt ++ ;
                n = n * 5 + 1 ;
            }
        }
        else {
        p = false ;
        }
    cnt ++ ;
    } 
if ( d ){
cout << n << endl ;
}
else{
cout << n << "200" << endl ;
}
return 0 ;
}
