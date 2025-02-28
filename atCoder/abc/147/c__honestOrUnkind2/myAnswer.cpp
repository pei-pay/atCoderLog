#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<vector<int>> x(n), y(n);
  rep(i, n) {
    cin >> a[i];
    x[i].resize(a[i]);
    y[i].resize(a[i]);
    rep(j, a[i]) {
      cin >> x[i][j] >> y[i][j];
      x[i][j]--; // 0-indexed に変換
    }
  }

  int ans = 0;
  rep(bit, 1 << n) {
    vector<int> d(n);
    rep(j, n) {
      if (bit >> j & 1) {
        d[j] = 1;
      }
    }
    bool ok = true;
    rep(j, n) {
      if (d[j]) {
        rep(k, a[j]) {
          if (y[j][k] == 0 && d[x[j][k]] == 1) {
            ok = false;
          }
          else if (y[j][k] == 1 && d[x[j][k]] == 0) {
            ok = false;
          }
        }
      }
    }
    if (ok) {
      int cnt = 0;
      rep(j, n) if(d[j] == 1) cnt++;
      ans = max(ans, cnt);
    }
  }

  cout << ans << endl;
  return 0;
}