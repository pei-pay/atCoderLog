#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vi = vector<int>;

int main() {
  // 食材の種類数: n;
  // 料理数: m;
  int n, m;
  cin >> n >> m;
  // 料理 i に使われている食材数 k[i];
  // i 日目に克服する食材 b[i];
  vi k(m), b(n);
  // 料理 i に使われている j 番目の食材の番号: a[i][j];
  vector<vector<int>> a(m);
  // 食材 i が使われている料理の番号の集合
  vector<set<int>> x(n);
  rep(i, m) {
    cin >> k[i];
    a[i].resize(k[i]);
    rep(j, k[i]) {
      cin >> a[i][j];
      a[i][j]--;
      x[a[i][j]].insert(i);
    }
  }
  rep(i, n) {
    cin >> b[i];
    b[i]--;
  }

  // 答え i日目に食材b[i] を克服した直後、食べれる料理数:  ans [i] (max: m);
  vi ans(n);

  set<int> ng;
  ans[n - 1] = m;
  for (int i = n - 1; i > 0; --i) {
    ng.merge(x[b[i]]);
    ans[i - 1] = m - ng.size();
    if (ans[i - 1] < 0) ans[i - 1] = 0;
  }
  // 出力
  rep(i, n) {
    cout << ans[i] << "\n";
  }
  return 0;
}