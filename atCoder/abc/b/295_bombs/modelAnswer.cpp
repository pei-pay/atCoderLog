#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int r, c;
  cin >> r >> c;
  vector<string> b(r);
  rep(i, r) cin >> b[i];

  // 爆発影響範囲を先に求める
  vector<vector<bool>> ex(r, vector<bool>(c));

  rep(i, r) rep(j, c) {
    // 数値判定
    if (isdigit(b[i][j])) {
      // 文字列の数字から数値への変換
      int d = b[i][j] - '0';
      rep(ni, r)rep(nj, c) {
        if (abs(i - ni) + abs(j - nj) <= d) {
          ex[ni][nj] = true;
        }
      }
    }
  }

  // '.'で初期化したマス
  vector<string> ans(r, string(c, '.'));
  // 爆発してない箇所だけ、壁'#'にする
  rep(i, r)rep(j, c) {
    if (b[i][j] == '#' && !ex[i][j]) ans[i][j] = '#';
  }

  rep(i, r) cout << ans[i] << endl;


  return 0;
}

