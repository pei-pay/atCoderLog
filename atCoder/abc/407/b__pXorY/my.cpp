#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int x, y;
  cin >> x >> y;
  int cnt = 0;
  rep(a, 6) {
    rep(b, 6) {
      int c = a + 1;
      int d = b + 1;
      if (x <= c + d || y <= abs(c - d)) {
        cnt++;
      }
    }
  }

  double ans = double(cnt) / double(36);

  printf("%.10f\n", ans);
  return 0;
}