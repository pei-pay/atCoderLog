// https://atcoder.jp/contests/abc246/editorial/3707
#include <iostream>
#include <algorithm>
using namespace std;
// long long型 https://zenn.dev/kubo_programmer/articles/0cd2492aad91f9629af2
typedef long long ll;
/**
 * n: 商品の数
 * k:クーポンの数
 * x: クーポン1枚で値引きされる金額
 */
ll n, k, x;
// 商品の値段を配列でもつ
ll a[200005];
int main(void)
{
  cin >> n >> k >> x;
  for(int i = 1; i <= n; i++) cin >> a[i];
  
  // 最終的な答え
  ll ans = 0;
  // まず全ての商品の値段の合計をansに入れる
  for(int i = 1; i <= n; i++) ans += a[i];
  
  /**
   * 2通りの値下げがある
   *  1. a≥X のとき、商品の値段は a−X 円に変わる。すなわち、X 円安くなる。
   *  2. 0<a<X のとき、商品の値段は 0 円に変わる。すなわち、a 円安くなる。
   */

  /**
   * 1の値下げが行われる回数'm'はa[i]/xを商品分行った合計値で求められる
   */
  ll m = 0;
  for(int i = 1; i <= n; i++) m += a[i]/x;
  // クーポンの数'k'には限りがあるので、min()で小さい方をクーポンを使った数とする
  m = min(m, k);
  // ansはクーポンを使った数*値引き値分引かれる。クーポンの数もm分減る
  ans -= m*x, k -= m;
  
  /**
   * 1の値下げが行われて、各商品の値段は a[i] mod X まで値下げされている
   * ※ `A mod X` はAをXで割ったあまりを表す
   */
  for(int i = 1; i <= n; i++) a[i] %= x;
  // a[i] mod Xを値が大きい順にソートする
  sort(a+1, a+n+1);
  
  // ソートした順にansから値を引いていく。2の値下げ
  for(int i = n; i >= 1; i--){
    // クーポンがなくなるまで行う
    if(k == 0) break;
    ans -= a[i], k--;
  }
  
  cout << ans << endl;
  
  return 0;
}