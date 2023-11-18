#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, x, s[10];
  cin >> n >> x;
  rep(i, n) cin >> s[i];

  int ans = 0;
  rep(i, n) {
    if (s[i] <= x) ans += s[i];
  }


  cout << ans << endl;
  return 0;
}