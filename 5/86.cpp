#include<bits/stdc++.h>
using namespace std;
int gsd(int &a,int &b){
while(b>0){
a=a%b;
swap(a,b);
}
return a;
}
int main(){
int t;
cin >> t;
vector<int>ot;
for(int e=0;t>e;e++){
int b,c;
cin >> b>>c;
ot.push_back(c/gsd(b,c));
}
for(auto c:ot){
cout << c<< endl;
}
return 0;    
}
