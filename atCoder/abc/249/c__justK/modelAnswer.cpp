#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
#define req(i, n) for (int i = 0; i < (n); ++i)

/**
 * abc  -> o -> 1
 * aef  -> x -> 0
 * bc   -> 0 -> 1
 * acg  -> o -> 1
 *
 * 文字列を選んだか選んでないかを2進数で表す
 * 上記例の場合、1101 となる
 * i番目が選ばれているかどうかの判定は s >> i & 1 で判定できる
 */

int main() {
  int n, k;
  cin >> n >> k;
  vector<string> S(n);
  req(i, n) cin >> S[i];

  int ans = 0;
  // 1<<n  は「2のn乗」を意味する
  req(s, 1 << n) {
    int now = 0;
    map<char, int> cnt;
    req(i, n) {
      if (s >> i & 1) {
        // 選んだ文字列の中で c が何回登場しているかをcountしていく
        for (char c : S[i]) cnt[c]++;
      }
    }
    // c が選んだ文字列の中でk回登場している種類数をcountしていく
    for (auto p : cnt)
      if (p.second == k) ++now;
    // 今ループの文字列の組み合わせが、他の組み合わせの時と比べて種類数が多かったかチェック!
    ans = max(ans, now);
  }

  cout << ans << endl;
  return 0;
}