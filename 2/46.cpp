#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
int main(){
int n,k;
cin >> n>>k;
vector<int>g(n);
vector<int>z(k);
for(int e=0;n>e;e++){
cin >> g[e];
}
for(int j=0;k>j;j++){
cin >> z[j];
}
for(int w=0;k>w;w++){
int l=-1;
int r=n;
while(r-l>1){
int m=(r+l)/2;
if(z[w]>g[m]){
l=m;
}
else{
r=m;
}
}
if(l==-1){
cout << g[r] << endl;
}
else if(r==n){
cout << g[r-1]<< endl;
}
else if(abs(z[w]-g[r])>=abs(z[w]-g[l])){
cout << g[l]<< endl;
}
else{
cout << g[r]<< endl;
}
}
return 0;
}
