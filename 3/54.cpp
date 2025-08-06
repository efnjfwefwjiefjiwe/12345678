#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
int abs(int &e ,int &r){
if(e-r<0){
return r-e;
}
else{

return e-r;
}
}
int main(){
int ne,me;
cin >> ne>>me;
vector<int>m(ne);
for(int z=0;ne>z;z++){
cin >> m[z];
}
vector<int>sh(me);
for(int h=0;me>h;h++){
cin >> sh[h];
}
stable_sort(sh.begin(),sh.end());
stable_sort(m.begin(),m.end());
int i=0;
int j=0;
int ibest=0;
int jbest=0;
bool go=true;
while(go){
if(m[i]>sh[j]){
if(m[i]-sh[j]<abs(sh[jbest]-m[ibest])){
ibest=i;
jbest=j;
}
if(j!=me-1){
j++;
}
else{
go=false;
}
}
else if(sh[j]>m[i]){
if(sh[j]-m[i]<abs(sh[jbest]-m[ibest])){
ibest=i;
jbest=j;
}
if(i!=ne-1){
i++;
}
else{
go=false;
}
}
else{
ibest=i;
jbest=j;
go=false;
}
}
cout << abs(sh[jbest]-m[ibest])<< endl;
return 0;
}
