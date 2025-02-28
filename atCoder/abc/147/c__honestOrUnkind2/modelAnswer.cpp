#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/**
 * g[i][j]
 * i 番目の人が j 番目の人をなんと証言したか
 *
 * - 0: 嘘つき
 * - 1: 正直者
 * - -1: 証言してない
 */
int g[15][15];

int main() {
  int n;
  cin >> n;
  rep(i, n) rep(j, n) g[i][j] = -1;
  rep(i, n) {
    int a;
    cin >> a;
    rep(j, a) {
      int x, y;
      cin >> x >> y;
      --x; // 0-indexed に変換
      g[i][x] = y;
    }
  }

  int ans = 0;
  // ビット全探索 (全てのケースを全探索)
  rep(i, 1 << n) {
    /**
     * d[i]
     *
     * i 番目の人が正直者か嘘つきかを配列で管理
     *
     * - 0: 嘘つき
     * - 1: 正直者
     */
    vector<int> d(n);
    // d を
    rep(j, n) {
      if (i >> j & 1) {
        d[j] = 1;
      }
    }
    bool ok = true;
    // 証言があっているか確認
    rep(j, n) {
      if (d[j] == 0) continue; // 嘘つきの場合はスキップ
      rep(k, n) { // i 番目の人が k 番目の人に対して言った証言があっているか確認
        if (g[j][k] == -1) continue; // 証言してない場合はスキップ
        if (g[j][k] != d[k]) ok = false;
      }
    }
    if (ok) ans = max(ans, __builtin_popcount(i));
  }
  cout << ans << endl;
  return 0;
}