#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  // 呼ばれた人をsetで管理
  set<int> called;
  // 呼ばれてない人をintで管理(小さい順に呼ばれるのでintで良い)
  int yet = 1;
  rep(qi, q) {
    int type;
    cin >> type;
    if (type == 1) {
      // 呼ばれてない人を呼ばれた人に分類 + 呼ばれてない人の番号をインクリメント
      called.insert(yet++);
    }
    if (type == 2) {
      int x;
      cin >> x;
      // 呼ばれた人からxの番号を持つ人を削除(xが受付に来た)
      called.erase(x);
    }
    if (type == 3) {
      // 呼ばれたけど来てない人の最小が再度よばれる
      int x = *called.begin();
      cout << x << '\n';
    }
  }
  return 0;
}