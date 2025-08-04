#include <bits/stdc++.h>
using namespace std;
int solve(vector<long long int>&k,long long int j){
int l=-1;
int r=k.size();
while(r-l>1){
int m=(r+l)/2;
if(j>k[m]){
l=m;
}
else{
r=m;
}
}
if(r==k.size()){
return -1;
}
else{
return r;
}
}
int main(){
int t;
cin >> t;
vector<int>ot;
for(int e=0;t>e;e++){
int n,q;
cin >> n>>q;
vector<int>caxar(n,0);
vector<long long int>cz(q,0);
vector<long long int>prefsummc(n+1,0);
for(int e=0;n>e;e++){
cin >> caxar[e];
}
stable_sort(caxar.begin(),caxar.end());
for(int e=n;e>0;e=e-1){
prefsummc[n-e+1]=prefsummc[n-e]+caxar[e-1];
}
for(int e=0;q>e;e++){
cin >> cz[e];
ot.push_back(solve(prefsummc,cz[e]));
}
}
for(int e=0;ot.size()>e;e++){
cout << ot[e]<< endl;
}
return 0;
}
