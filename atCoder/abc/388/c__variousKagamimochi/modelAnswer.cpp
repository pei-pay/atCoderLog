#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi A(n);
  rep(i, n) cin >> A[i];

  ll ans = 0;
  rep(b, n) {
    // 二分探索
    int r = upper_bound(A.begin(), A.begin() + b, A[b] / 2) - A.begin();
    ans += r;
  }
  cout << ans << endl;
  return 0;
}