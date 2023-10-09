#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/**
 * WA
 * いくつかのテストケースでWAになる
*/
int main() {
  // 入力
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];


  /*
   * (A1-A2)^2 = A1^2 + A2^2 - 2*A1*A2 と式変形
   * まずは、A1^2 + A2^2 + ... + An^2 を求める
  */
  long long x = 0;
  rep(i, n) {
    x += (n - 1) * a[i] * a[i];
  }

  /*
   * 次に、2*A1*A2 + 2*A1*A3 + ... + 2*A1*An を求める
   * これは、A1*(A2 + A3 + ... + An) と式変形できる
   * これを累積和を使って求める
  */
  vector<long long> t(n - 1);
  t[0] = a[0];
  for (int i = 1; i < n - 1; i++) {
    t[i] = t[i - 1] + a[i];
  }
  long long y = 0;
  for (int i = 1; i < n; i++) {
    y += a[i] * t[i - 1];
  }

  // 出力
  cout << x - 2 * y << endl;

  return 0;
}