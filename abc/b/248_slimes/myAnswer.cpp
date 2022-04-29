#include <iostream>
// #include <string>
// #include <algorithm>
using namespace std;

int main() {
  int A, B, K;
  cin >> A >> B >> K;
  int ans = 0;
  while (A < B) {
    A = A * K;
    ans++;
  }

  cout << ans << endl;
}

/**
 * 結果
 * WA
 * https://atcoder.jp/contests/abc248/submissions/31031268
 *
 * オバーフロー ->
 * https://pyteyon.hatenablog.com/entry/2018/11/30/200000#example
 */