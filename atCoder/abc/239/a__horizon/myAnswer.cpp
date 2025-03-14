#include <iostream>
#include <cmath>
using namespace std;

/**
 * WA
 * 相対誤差が 10^6 以下にならない
 */
int main() {
  long double h;
  cin >> h;
  long double x;
  x = sqrt(h * (12800000 + h));
  cout << x << endl;
  return 0;
}