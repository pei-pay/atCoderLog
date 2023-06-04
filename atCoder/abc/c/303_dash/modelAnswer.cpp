#include <iostream>
#include <string>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n, m, h, k;
  string s;
  // m個の回復アイテムをpair型のsetで管理する
  set<pair<int, int>> ps;

  // 入力
  cin >> n >> m >> h >> k;
  cin >> s;
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    ps.emplace(x, y);
  }

  // (x,y): 高橋くんの位置
  int x = 0, y = 0;
  // N回の移動を行う
  rep(i, n) {
    // 文字に応じた移動
    if (s[i] == 'R') x++;
    if (s[i] == 'L') x--;
    if (s[i] == 'U') y++;
    if (s[i] == 'D') y--;
    // 移動ごとに体力の減少
    h--;
    // 体力が0以下なら結果を出力し終了させる
    if (h < 0) {
      cout << "No" << endl;
      return 0;
    }
    // 回復アイテムがにある場合の操作
    if (ps.count(pair<int, int>(x, y))) {
      if (h < k) {
        h = k;
        // 回復アイテムを消費(削除)
        ps.erase(pair<int, int>(x, y));
      }
    }
  }

  // n回の移動を生き残ったの結果を出力し終了
  cout << "Yes" << endl;
  return 0;
}