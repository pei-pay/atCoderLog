#include <iostream>
using namespace std;

int main() {
  int s, a, b, x;
  cin >> s >> a >> b >> x;

  int len = 0;
  len += (x / (a + b)) * a; // repeats (a+b) seconds
  len += min(x % (a + b), a); // remainder

  int ans = len * s;
  cout << ans << "\n";

  return 0;
}
