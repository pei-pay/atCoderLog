#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

// 縦横4方向への移動を表す配列
const int di[] = { -1, -1, 1, 1 };
const int dj[] = { -1, 1, -1, 1 };

int main() {
  // 入力
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  // 答え用の配列
  int n = min(h, w);
  vector<int> ans(n + 1);

  rep(i, h)rep(j, w) {
    /*
     * バツ印の中心を求める
    */
    if (s[i][j] != '#') continue;
    int cnt = 0;
    // 4方向チェックして全てに'#'があればs[i][j]は中心
    rep(v, 4) {
      int ni = i + di[v];
      int nj = j + dj[v];
      if (ni < 0 || nj < 0 || ni >= h || nj >= w) continue;
      if (s[ni][nj] == '#') cnt++;
    }
    /*
     * バツ印のサイズを求める
    */
    if (cnt == 4) {
      int size = 0;
      int ni = i, nj = j;
      // 中心から1方向に進んでいって、'#'が続く限りsizeを大きくしていく
      while (true) {
        ni++;
        nj++;
        if (ni == h || nj == w) break;
        if (s[ni][nj] != '#') break;
        size++;
      }
      // sizeの
      ans[size]++;
    }
  }

  // 出力
  rep1(i, n) cout << ans[i] << ' ';
  cout << endl;
  return 0;
}