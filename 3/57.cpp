#include <bits/stdc++.h>
using namespace std;
int Zapbin(int a,vector<long long int>&f){
int l=-1;
int r=f.size();
while(r-l>1){
int m=(r+l)/2;
if(a>f[m]){
l=m;
}
else{
r=m;
}
}
return f.size()-r;
}
int main(){
int n,q;
cin >> n>>q;
vector<long long int>g(n);
vector<long long int>z(q);
for(int e=0;n>e;e++){
cin >> g[e];
}
stable_sort(g.begin(),g.end());
for(int e=0;q>e;e++){
cin >> z[e];
}
for(int e=0;q>e;e++){
cout << Zapbin(z[e],g)<< endl;
}
return 0;
}
