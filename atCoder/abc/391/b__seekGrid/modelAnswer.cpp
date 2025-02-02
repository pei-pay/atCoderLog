#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n), t(m);
  rep(i, n) cin >> s[i];
  rep(i, m) cin >> t[i];

  rep(a, n - m + 1)rep(b, n - m + 1) {
    bool ok = true;
    rep(i, m)rep(j, m) {
      if (s[a + i][b + j] != t[i][j]) ok = false;
    }
    if (ok) {
      cout << a + 1 << " " << b + 1 << endl;
      return 0;
    }
  }

  return 0;
}