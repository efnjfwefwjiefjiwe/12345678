#include <bits/stdc++.h>
using namespace std;
long long int solve(vector<int>&pm,vector<long long int>&prefs,int Q){
int l=-1;
int r=pm.size();
while(r-l>1){
int m=(r+l)/2;
if(Q>=pm[m]){
l=m;
}
else{
r=m;
}
}
return prefs[l];
}
int main(){
int t;
cin >> t;
vector<int>zap(t);
vector<long long int>ot;
for(int ei=0;t>ei;ei++){
int n,q;
cin >> n>>q;
zap[ei]=q;
vector<int>pm(n+1,0);
vector<long long int>prefs(n+1,0);
for(int e=0;n>e;e++){
int d;
cin >> d;
pm[e+1]=max(pm[e],d);
prefs[e+1]=prefs[e]+d;
}
for(int u=0;q>u;u++){
int Q;
cin >> Q;
ot.push_back(solve(pm,prefs,Q));
}
}
int cnt=0;
for(int e=0;t>e;e++){
for(int i=0;zap[e]>i;i++){
cout <<ot[cnt] <<" ";
cnt++;
}
cout << "" << endl;
}
return 0;
}
