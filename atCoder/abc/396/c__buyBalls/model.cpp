#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> b(n), w(m);
  rep(i, n) cin >> b[i];
  rep(i, m) cin >> w[i];
  sort(b.rbegin(), b.rend());
  sort(w.rbegin(), w.rend());

  ll ans = 0;
  ll sumb = 0;
  ll maxw = 0, sumw = 0;
  rep(i, n) {
    sumb += b[i];
    if (i < m) sumw += w[i];
    maxw = max(maxw, sumw);
    ans = max(ans, sumb + maxw);
  }
  cout << ans << endl;
  return 0;
}