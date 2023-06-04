#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;

  int cnt = 0;
  int ans = -1;
  rep(i, n) {
    if (s[i] == 'o') cnt++;
    else {
      if (cnt > 0) ans = max(ans, cnt);
      cnt = 0;
    }
  }
  if (cnt > 0) {
    if (n != cnt) {
      ans = max(ans, cnt);
    }
  }

  cout << ans << endl;

  return 0;
}