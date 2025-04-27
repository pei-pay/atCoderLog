#include <iostream>
#include <cmath>
using namespace std;

/**
 * WA
 * 小数部第 3 位まで出力できてない
 */
int main() {
  double a, b;
  cin >> a >> b;
  double x = b / a;
  x = x * pow(10, 3);
  x = round(x);
  x /= pow(10, 3);
  cout << x << endl;
  return 0;
}