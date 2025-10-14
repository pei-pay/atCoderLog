#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vi a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  ll ans = 0;
  rep(i, n) ans += min(a[i], b[i]);

  rep(qi, q) {
    char c; int x, v;
    cin >> c >> x >> v;
    x--;
    int pre = min(a[x], b[x]);
    if (c == 'A') a[x] = v; else b[x] = v;
    int now = min(a[x], b[x]);
    ans += now - pre;
    cout << ans << "\n";
  }
}