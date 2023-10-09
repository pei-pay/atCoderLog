#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)

const int MaxA = 200;

int main() {
  // 入力
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  /**
   *  a[i] - a[j] = xとなるような個数をd[x]として管理
   *  - a[i]の絶対値はMaxA以下なので、a[i] - a[j]の絶対値はMaxA * 2以下
   *  - d[x]の初期値0
  */
  vector<int> d(MaxA * 2 + 1);

  ll ans = 0;
  rep(i, n) {
    for (int aj = -MaxA; aj <= MaxA; ++aj) {
      // マイナスの値を扱うために、配列のインデックスをずらす(+MaxA)
      int c = d[MaxA + aj];
      int x = a[i] - aj;
      ans += (ll)x * x * c;
    }
    d[MaxA + a[i]]++;
  }

  // 出力
  cout << ans << endl;
  return 0;
}