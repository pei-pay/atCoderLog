#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  // 入力
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  /**
   * 最終的な配列bを求める
   * 例) [4, 7, 3, 7]の場合、[5, 6, 5, 5]
  */
  // まず配列の総和sを求める(何回処理を行ってもsの値は変わらない = 不変量!)
  ll s = 0;
  rep(i, n) s += a[i];
  // [5, 6, 5, 5]の5の値は '総和 / 個数' で求まる
  ll x = s / n;
  // [5, 6, 5, 5]の6となる値の数は '総和/個数の余り' 
  ll r = s % n;

  // xで初期化した配列にrの個数文だけ+1すれば最終的な配列bが求まる
  vector<ll> b(n, x);
  rep(i, r) b[i]++;

  // 入力値aと最終的な配列bをソート
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  // 処理を何回行ったかについては、a[i]とb[i]番目の差の絶対値 / 2 の値
  /**
   * a = [4, 7, 3, 7] - ソート -> [3, 4, 7, 7]
   * b = [5, 6, 5, 5] - ソート -> [5, 5, 5, 6]
   *
   * a[i] - b[i] の差 = [-2, -1, 2, 1]
   * abs(a[i] - b[i])の和 / 2 = (2 + 1 + 2 + 1) / 2 = 6 / 2 = 3(操作回数)
   *
  */
  ll ans = 0;
  rep(i, n) ans += abs(a[i] - b[i]);
  cout << ans / 2 << endl;

  return 0;
}