#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
int main(){
int n;
cin >> n;
int e=1;
int cnt=0;
while(n>e){
e=e*2;
cnt++;
}
cout << cnt<< endl;
return 0;
}
