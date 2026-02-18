#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;
  rep(l, n) {
    for (int r = l + 1; r < n; ++r) {
      int sum = 0;
      for (int i = l; i <= r; ++i) {
        sum += a[i];
      }
      bool yes = true;
      for (int i = l; i <= r; ++i) {
        if (sum % a[i] == 0) yes = false;
      }
      if (yes) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}