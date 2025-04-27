#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  // 入力
  int n, d, p;
  cin >> n >> d >> p;
  vector<int> f(n);
  rep(i, n) cin >> f[i];

  // 小さい順にソートしておく
  sort(f.begin(), f.end());

  // i日までの金額がわかるように累積和をとっておく
  vector<ll> s(n + 1);
  rep(i, n) s[i + 1] = s[i] + f[i];


  // 最小値を求める為に、十分大きい値で初期化しておく
  ll ans = 1e18;

  // パスを使う回数を全探索
  rep(i, 1e9) {
    // i回パスを使うときに、何日分の料金を払う必要があるか
    int r = max(0, n - i * d);
    // i回パスを使うときに、何日分の料金を払う必要があるか
    ll now = s[r] + (ll)i * p;
    ans = min(ans, now);

    // パスを使わない場合の金額まで計算したら終了
    if (r == 0) break;
  }

  // 出力
  cout << ans << endl;
  return 0;
}