#include <bits/stdc++.h>
using namespace std;
int n=0;
int q=0;
vector<long long int>g(n);
vector<long long int>z(q);
vector<long long int>p(n+1,0);
int uperbound(long long int x){
int l=-1;
int r=n;
while(r-l>1){
int m=(r+l)/2;
if(x>=g[m]){
l=m;
}
else{
r=m;
}
}
return r;
}
long long int Zap(long long int a){
int h=uperbound(a);
return (a*h-p[h]+p[0])+(p[n]-p[h])-a*(n-h);
}
int main(){
cin >> n>>q;
for(int e=0;n>e;e++){
int d;
cin >> d;
g.push_back(d);
}
stable_sort(g.begin(),g.end());
for(int e=0;q>e;e++){
int d;
cin >> d;
z.push_back(d);
} 
for(int e=1;n>=e;e++){
p.push_back(0);
p[e]=p[e-1]+g[e-1];
}
for(int e=0;q>e;e++){
cout << Zap(z[e])<< endl;
}
return 0;
}
