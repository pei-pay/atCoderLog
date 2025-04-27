#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  rep(i, n) {
    int mx = -1;
    int ans = -1;
    rep(j, n) {
      if (i == j) continue;
      int xd = x[i] - x[j];
      int yd = y[i] - y[j];
      int d = xd * xd + yd * yd;
      if (mx < d) {
        mx = d;
        ans = j + 1;
      }
    }
    cout << ans << "\n";
  }

  return 0;
}