#include<bits/stdc++.h>
using namespace std;
int solve (vector<int>&g,int s){
if(s>g[g.size()-1]){
return -1;
}
else if(s==g[g.size()-1]){
return 0;
}
else{
int l=-1;
int r=g.size();
int mini=20000000;
int j=0;
int i=0;
for(int e=1;g.size()>e;e++){
if(g[e]>=s){
int l=-1;
int r=e+1;
while(r-l>1){
int m=(r+l)/2;
if(g[e]-s>g[m]){
l=m;
}
else{
r=m;
}
}
j=e-1;
i=l;
}
int h=g.size();
mini=min(mini,h-1-j+i);
}
return mini;
}
}
int main(){
int t;
cin >> t;
vector<int>ot;
for(int e=0;t>e;e++){
int n,s;
cin >> n>>s;
vector<int>g(n+1,0);
for(int e=0;n>e;e++){
int d;
cin >> d;
g[e+1]=g[e]+d;
}
ot.push_back(solve(g,s));
}
for(auto c:ot){
cout << c << endl;
}
return 0;
}
