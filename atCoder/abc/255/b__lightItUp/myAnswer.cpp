#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

/**
 * WA
 * 50分かけても解けなかったので中断
 */
int main() {
  int n, k;
  cin >> n >> k;
  vi a(k); // 明かりを持っている人: a[i]
  rep(i, k) {
    cin >> a[i];
    a[i]--;
  }
  vi x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  vector<bool> p(n, false); // i の人は明かりを持っているか
  rep(i, k) p[a[i]] = true;

  vector<vector<long double>> R(k); // 明かりを持っている i 番目の人からの明かりを持ってない j 番目の人への距離: R[i][j]
  rep(ki, k) {
    rep(ni, n) {
      if(p[ni]) continue;
      int dx = x[a[ki]] - x[ni];
      int dy = y[a[ki]] - y[ni];
      long double r = sqrt(dx * dx + dy * dy);
      R[ki].push_back(r);
    }
  }
  rep(i, R.size()) {
    rep(j, R[i].size()) {
      cout << i << ": " <<  R[i][j] << endl;
    }
  }

  long double ans = 1e18;

  rep(i, R.size()) {
    rep(j, R[i].size()) {
      cout << i << ": " << R[i][j] << endl;
    }
  }

  cout << ans << endl;
  return 0;
}