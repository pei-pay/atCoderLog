#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vi = vector<int>;

/**
 * WA
 */
int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];

  ll ans = 0;
  rep(i, n - 1) {
    // 二分探索
    int left = i, right = n - 1;
    ll x = a[i] * 2;
    int index = -1;
    while (left <= right) {
      int mid = (left + right) / 2;
      if (x <= a[mid] && (mid != 0 && x > a[mid - 1])) {
        index = mid;
        break;
      }
      if (a[mid] > x) right = mid - 1;
      else left = mid + 1;
    }
    if (index == -1) continue;
    ans += (n - index);
  }

  cout << ans << endl;
  return 0;
}