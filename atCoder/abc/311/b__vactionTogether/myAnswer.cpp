#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, d;
  cin >> n >> d;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  vector<bool> x(d);
  rep(i, d) {
    x[i] = true;
  }


  rep(i, n) {
    rep(j, d) {
      if (s[i][j] == 'x') {
        x[j] = false;
      }
    }
  }

  int ans = 0;
  int cur = 0;
  rep(i, d) {
    if (x[i] == true) {
      cur++;
      if (i == d - 1) {
        ans = max(ans, cur);
      }
    }
    else {
      ans = max(ans, cur);
      cur = 0;
    }
  }

  cout << ans << endl;

  return 0;
}