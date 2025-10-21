#include <iostream>
using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  double x = a / b;
  int y = x;
  double plus = double(y + 1) - x;
  double minus = x - double(y);
  if (minus < plus) {
    cout << y << endl;
  }
  else {
    cout << y + 1 << endl;
  }
  return 0;
}