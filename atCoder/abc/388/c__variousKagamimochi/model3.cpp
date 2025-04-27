#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vi = vector<int>;

/* 尺取り法 */
int main() {
  int n;
  cin >> n;
  vi A(n);
  for(auto &&a: A) cin >> a;

  ll ans = 0;
  // a / 2 より大きい最初の要素（なければ最後の次）を表す値 j
  for (int j = 0; const auto a : A) {
    // 越えるまで進める
    while (j < n && A[j] * 2 <= a) j++;
    ans += j;
  }
  cout << ans << endl;
  return 0;
}