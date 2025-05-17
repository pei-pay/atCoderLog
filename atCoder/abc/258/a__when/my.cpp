#include <iostream>
using namespace std;

int main() {
  int k;
  cin >> k;

  int h = 21;
  int m = 0;

  if(k >= 60) {
    h++;
    k -= 60;
  }
  m+=k;

  cout << h;
  cout << ":";
  if (m < 10) {
    cout << "0";
  }
  cout << m << endl;

  return 0;
}