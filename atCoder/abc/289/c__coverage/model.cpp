#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  // 入力
  int N, M;
  cin >> N >> M;
  vector<vector<int>> a(M);
  for (int i = 0; i < M; i++) {
    int c;
    cin >> c;
    a[i].resize(c);
    for (auto& x : a[i]) cin >> x;
  }

  int ans = 0;

  /*
   * ビット全探索
  */
  for (int b = 0; b < (1 << M); b++) {
    set<int> s;
    for (int i = 0; i < M; i++) {
      if ((b >> i) & 1) { //  整数bのiビット目が1かどうか
        for (auto& x : a[i]) s.insert(x);
      }
    }
    ans += (int)s.size() == N;
  }

  cout << ans << "\n";
  return 0;
}