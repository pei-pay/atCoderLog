#include <iostream>
using namespace std;

int main() {
  int s, a, b, x;
  cin >> s >> a >> b >> x;

  int ans = 0;
  int i = x / (a + b);
  ans = s * a * i;
  x -= (a + b) * i;
  if (a < x) {
    ans += s * a;
  }
  else {
    ans += s * x;
  }
  cout << ans << endl;
  return 0;
}