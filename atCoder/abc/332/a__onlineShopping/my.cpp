#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, s, k;
  cin >> n >> s >> k;
  vector<int> p(n), q(n);
  rep(i, n) cin >> p[i] >> q[i];

  int ans = 0;

  rep(i, n) {
    ans += p[i] * q[i];
  }

  if (ans >= s) {
    cout << ans << endl;
  }
  else {
    cout << ans + k << endl;
  }

  return 0;
}