#include <iostream>
using namespace std;

int main() {
  double a;
  cin >> a;
  int x, y;
  x = a;
  y = (a - x) * 10;
  if (0 <= y && y <= 2) cout << x << "-";
  else if (3 <= y && y <= 6) cout << x;
  else cout << x << "+";
  cout << endl;
  return 0;
}