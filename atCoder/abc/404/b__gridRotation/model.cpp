#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  rep(i, n) cin >> s[i];
  rep(i, n) cin >> t[i];

  int ans = 1001001001;

  rep(ri, 4) {
    // calc
    {
      int now = ri;
      rep(i, n) rep(j, n) {
        if (s[i][j] != t[i][j]) now++;
      }
      ans = min(ans, now);
    }
    // rotate
    {
      vector<string> ns = s;
      rep(i, n) rep(j, n) {
        ns[j][n - 1 - i] = s[i][j];
      }
      s = ns;
    }
  }
  cout << ans << endl;
  return 0;
}