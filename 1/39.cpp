#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
int main() {
  int n;
  cin >> n;
  if ((n * 27) / 25 == 206) {
    cout << "so-so" << endl;
  }
  else if ((n * 27) / 25 > 206) {
    cout << ":(" << endl;
  }
  else {
    cout << "Yay!" << endl;
  }
  return 0;
}
