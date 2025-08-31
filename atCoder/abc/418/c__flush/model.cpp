#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vi a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());
  vector<ll> s(n + 1);
  rep(i, n) s[i + 1] = s[i] + a[i];

  rep(qi, q) {
    int b;
    cin >> b;
    if (a.back() < b) {
      cout << -1 << "\n";
      continue;
    }
    int i = lower_bound(a.begin(), a.end(), b - 1) - a.begin();
    ll x = ll(n - i) * (b - 1);
    x += s[i];

    cout << x + 1 << "\n";
  }

  return 0;
}