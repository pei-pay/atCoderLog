#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

const vector<int> dy = { 0, 1, 2, 3, 3, 3, 3 };
const vector<int> dx = { 3, 3, 3, 3, 0, 1, 2 };


int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  vector<pair<int, int>> ans;

  rep(y, n) {
    rep(x, m) {
      bool up = true;
      bool bottom = true;
      for (int dy = 0; dy < 4; dy++) {
        for (int dx = 0; dx < 4; dx++) {
          if (y + dy >= n || x + dx >= m) {
            up = false;
            continue;
          }
          if (dx == 3 || dy == 3) {
            if (s[y + dy][x + dx] != '.') {
              up = false;
            }
          }
          else if (s[y + dy][x + dx] != '#') {
            up = false;
          }
        }
      }
      for (int dy = 5; dy < 9; dy++) {
        for (int dx = 5; dx < 9; dx++) {
          if (y + dy >= n || x + dx >= m) {
            bottom = false;
            continue;;
          }
          if (dx == 5 || dy == 5) {
            if (s[y + dy][x + dx] != '.') {
              up = false;
            }
          }
          else if (s[y + dy][x + dx] != '#') {
            bottom = false;
          }
        }
      }


      if (up && bottom) {
        ans.emplace_back(y, x);
      }
    }
  }

  // 出力
  for (auto a : ans) {
    cout << a.first + 1 << " " << a.second + 1 << endl;
  }

  return 0;
}