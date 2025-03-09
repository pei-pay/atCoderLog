#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<ll> b(n), w(m);
  rep(i, n) cin >> b[i];
  rep(i, m) cin >> w[i];

  sort(b.rbegin(), b.rend());
  sort(w.rbegin(), w.rend());

  ll ans = 0;
  int bs = 0; // bのボールを取った数;
  rep(i, n) {
    if (b[i] > 0) {
      ans += b[i];
      bs++;
    }
    else {
      break;
    }
  }
  rep(i, bs) {
    if (w[i] > 0) {
      ans += w[i];
    }
    else {
      break;
    }
  }

  for (int i = bs; i < n; i++) {
    ll x = b[i] + w[i];
    if (x + ans > ans) {
      ans = x + ans;
      continue;
    }
    else {
      break;
    }
  }
  cout << ans << endl;

  return 0;
}