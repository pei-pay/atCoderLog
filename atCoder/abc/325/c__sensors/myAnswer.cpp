#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


int h, w;
vector<string> s;

int xVec[8] = { 1, 1, 1, 0, 0, -1, -1, -1 };
int yVec[8] = { 1, 0, -1, 1, -1, 1, 0, -1 };

void isConnected(int y, int x) {
  // チェック済みの箇所はセンサをなくす
  s[y][x] = '.';
  rep(i, 8) {
    int y1 = y + yVec[i];
    int x1 = x + xVec[i];
    // 範囲外
    if (y1 < 0 || h <= y1 || x1 < 0 || w <= x1) continue;
    // センサあり
    if (s[y1][x1] == '#') {
      isConnected(y1, x1);
    }
  }
}

int main() {
  // 入力
  cin >> h >> w;
  s.resize(h);
  rep(i, h) cin >> s[i];

  int ans = 0;
  rep(y, h) { // 1000
    rep(x, w) { // 1000
      if (s[y][x] == '#') {
        // 繋がっているセンサを全てチェック
        isConnected(y, x);
        ans++;
      }
    }
  }

  // 出力
  cout << ans << endl;
  return 0;
}