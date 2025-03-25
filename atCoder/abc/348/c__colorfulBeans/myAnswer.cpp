#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi a(n), c(n);
  rep(i, n) cin >> a[i] >> c[i];
  map<int, int> m;
  rep(i, n) {
    if (m[c[i]] == 0) {
      m[c[i]] = a[i];
    }
    else {
      int x = m[c[i]];
      m[c[i]] = min(x, a[i]);
    }
  }
  int mx = -1;
  for (auto& p : m) {
    if (mx < p.second) {
      mx = p.second;
    }
  }
  cout << mx << endl;
  return 0;
}