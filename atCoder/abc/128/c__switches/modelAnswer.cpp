#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> k(m), p(m);
  vector<vector<int>> s(m);
  rep(i, m) {
    cin >> k[i];
    s[i].resize(k[i]);
    rep(j, k[i]) {
      cin >> s[i][j];
      s[i][j]--; // 0-indexed に変換
    }
  }
  rep(i, m) {
    cin >> p[i];
  }

  int ans = 0;
  // 全てのスイッチのオン・オフの組み合わせを試す
  rep(bit, 1 << n) {
    cout << "bit: " << bit << endl;
    bool ok = true;
    // 各電球について条件をチェック
    rep(i, m) {
      int cnt = 0;
      // 電球 i に接続されているスイッチのオンの数を数える
      rep(j, k[i]) {
        if (bit & (1 << s[i][j])) {
          cnt++;
        }
      }
      // 電球 i が点灯する条件を満たしているかチェック
      if (cnt % 2 != p[i]) {
        ok = false;
        break;
      }
    }
    if (ok) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
