#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
int main(){
  int a, b;
  cin >> a >> b;
  if(6 * a >= b and b > a - 1){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}
