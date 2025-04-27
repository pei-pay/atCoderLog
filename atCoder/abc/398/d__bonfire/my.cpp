#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

/**
 * RE
 * 方針としては合ってた。
 * 400000 * 400000 の grid を vector で管理しようとした為に実行時エラー
 * vector ではなく、set<pair<int, int>> で座標を管理していれば AC だった
 * あと凡ミスもしているのでそこの修正も必要ではあった
 */
int main() {
  int n, r, c;
  cin >> n >> r >> c;
  string s;
  cin >> s;

  // 正の値のみで考える
  int base = 200000;
  vector<vector<int>> g(400000, vector<int>(400000));
  int fireY = base;
  int fireX = base;
  int pY = r + base;
  int pX = c + base;
  g[fireY][fireX] = 1;

  rep(i, n) {
    cout << s[i] << endl;
    if (s[i] == 'N') {
      pY += 1;
      fireY += 1;
    }
    else if (s[i] == 'S') {
      pY -= 1;
      fireY -= 1;
    }
    else if (s[i] == 'W') {
      pX += 1;
      fireX += 1;
    }
    else if (s[i] == 'E') {
      pX -= 1;
      fireX += 1; // + ではなく - の間違い！
    }
    g[fireY][fireX] = 1;
    if (g[pY][pX] == 1) cout << 1 << endl;
    else cout << 0 << endl;
  }
  return 0;
}