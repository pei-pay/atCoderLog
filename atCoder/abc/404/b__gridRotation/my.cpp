#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

/**
 * WA
 */
int main() {
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  rep(i, n) {
    cin >> s[i];
  }
  rep(i, n) {
    cin >> t[i];
  }

  int ans = 0;
  while (true) {
    bool same = true;
    rep(i, n) {
      rep(j, n) {
        if(s[i][j] != t[i][j]) {
          same = false;
          break;
        }
      }
    }
    if (same) {
      cout << ans << endl;
      return 0;
    }
    ans++;
  }
  return 0;
}