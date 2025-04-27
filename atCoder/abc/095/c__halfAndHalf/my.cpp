#include <iostream>
using namespace std;

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;

  long long ans = 0;

  if (x > y) {
    if (a + b > 2 * c) {
      ans += 2 * y * c;
    }
    else {
      ans += y * a + y * b;
    }
    if (a * (x - y) > 2 * c * (x - y)) {
      ans += 2 * c * (x - y);
    }
    else {
      ans += a * (x - y);
    }
  }
  else {
    if (a + b > 2 * c) {
      ans += 2 * x * c;
    }
    else {
      ans += x * a + x * b;
    }
    if (b * (y - x) > 2 * c * (y - x)) {
      ans += 2 * c * (y - x);
    }
    else {
      ans += b * (y - x);
    }
  }

  cout << ans << '\n';
  return 0;
}