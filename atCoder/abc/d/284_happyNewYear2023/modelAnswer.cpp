#include<bits/stdc++.h>
using namespace std;
using ll = long long;

/**
 *  Nを素因数分解するアルゴリズムとしては i=1,2,..√N の順にNがiで割り切れるかどうかを確かめるO(√N)のアルゴリズムが使える
 * = 試し割りと呼ばれる
 *
 *  本問題ではNが大きいためO(√N)では間に合わない。
 * N=p^2qという条件があることから、min(p,q) <= 3√N が成り立つ
 * よって、O(√N)まで試し割りしなくても、O(3√N)まで試し割れば、p,qの少なくとも1つは見つかる
*/

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;

    ll p = 0, q = 0;
    // 2〜3√Nまで試し割り
    for (ll i = 2; i * i * i <= n; i++) {
      // Nがiで割り切れないなら次の数へ
      if (n % i != 0) continue;

      // N/i が iで割り切れるなら、p=i
      if ((n / i) % i == 0) {
        p = i;
        q = n / i / i;
      }
      // 割り切れないなら、q=i
      else {
        q = i;
        // p^2q=Nなのでp=√N/q
        p = (ll)round(sqrt(n / i));
      }
      break;
    }
    cout << p << ' ' << q << endl;
  }
}
