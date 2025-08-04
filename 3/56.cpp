#include<bits/stdc++.h>
using namespace std;
int gi=0;
string solve(vector<int>&a,int c,int k){
int l=-1;
int r=a.size();
while(r-l>1){
int m=(r+l)/2;
if(c>=a[m]){
l=m;
}
else{
r=m;
}
}
if(k>=a.size()-r+1){
return "Yes";
}
else{
return "No";
}
}
int main(){
int n,k;
cin>>n>>k;
vector<int>g;
vector<int>go;
for(int e=0;n>e;e++){
int s=0;
for(int r=0;3>r;r++){
int d;
cin>>d;
s=s+d;
}
go.push_back(s);
g.push_back(s);
}
stable_sort(g.begin(),g.end());
for(int w=0;n>w;w++){
cout<<solve(g,go[w]+300,k)<<endl; 
}
return 0;    
}
