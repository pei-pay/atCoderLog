#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;
  long long ans = 1LL << 60;
  rep(i, max(x, y) * 2 + 1) {
    long long sm = c * i;
    sm += a * max(x - i / 2, 0);
    sm += b * max(y - i / 2, 0);
    ans = min(ans, sm);
  }
  cout << ans << endl;
  return 0;
}