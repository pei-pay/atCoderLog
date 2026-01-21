#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  int ans = 100000;
  rep(si, n - m + 1) {
    int sum = 0;
    rep(ti, m) {
      int temp;
      if (s[si + ti] < t[ti]) {
        temp = s[si + ti] + 10 - t[ti];
      }
      else {
        temp = s[si + ti] - t[ti];
      }
      sum += temp;
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
  return 0;
}