#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  // 入力
  int A[9][9];
  rep(i, 9) {
    rep(j, 9) {
      cin >> A[i][j];
    }
  }

  // 横軸が1~9の数字を含むか
  rep(y, 9) {
    set<int> s;
    rep(x, 9) {
      s.insert(A[y][x]);
    }
    if (s.size() != 9) {
      cout << "No" << endl;
      return 0;
    }
  }

  // 縦軸が1~9の数字を含むか
  rep(x, 9) {
    set<int> s;
    rep(y, 9) {
      s.insert(A[y][x]);
    }
    if (s.size() != 9) {
      cout << "No" << endl;
      return 0;
    }
  }

  // 3*3のブロックが1~9の数字を含むか
  rep(i, 3) {
    rep(j, 3) {
      set<int> s;
      rep(x, 3) {
        rep(y, 3) {
          s.insert(A[x + (3 * i)][y + (3 * j)]);
        }
      }
      if (s.size() != 9) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}