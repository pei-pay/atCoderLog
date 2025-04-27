#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = n <= 41 ? n : n + 1;
  cout << "AGC";
  if(x < 10) {
    cout << "00";
  } else {
    cout << "0";
  }
  cout << x;
  cout << endl;
  return 0;
}         