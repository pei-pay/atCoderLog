#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  // 入力
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  // `next_permutation`を利用する為にvectorをソートしておく
  sort(s.begin(), s.end());

  do {
    // ok: 並び替えた列に対して、条件を満たすかどうか管理
    bool ok = true;
    rep(i, n - 1) {
      // cnt: s[i][j]とs[i+1][j]で文字が違った回数を管理
      int cnt = 0;
      rep(j, m) {
        if (s[i][j] != s[i + 1][j]) cnt++;
      }
      // 1回以上違う場合は条件を満たさないのでfalseにする
      if (cnt != 1) ok = false;
    }
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
    // vectorをソートした状態で渡すことで、その列を並び替えて作ることができる列を全て列挙
  } while (next_permutation(s.begin(), s.end()));

  cout << "No" << endl;

  return 0;
}
