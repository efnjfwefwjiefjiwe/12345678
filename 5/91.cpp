#include<iostream>
using namespace std;
int main(){
  string a;
  cin >> a;
  bool j = true;
  int k = - 1;
  for(int e = 2; 36 >= e && j; e++){
  long long int s = 0;
  bool p = true;
  for(int ep = a.size() - 1; ep > - 1 && p; ep = ep - 1){
    if(a[ep] >= 'A' && e > int(a[ep] - 'A') + 10){
      s = s + int(a[ep] - 'A') + 10;
    }
    else if('9' >= a[ep] && e > int(a[ep] - '0')) {
      s = s + int(a[ep] - '0');
    }
    else{
      p = false;
    }
  }
  if(p && s % (e - 1) == 0){
    j = false;
    k = e;
  }
  }
  if(k != - 1){
    cout << k << endl;
  }
  else{
    cout << "No solution." << endl;
  }
  return 0; 
}
