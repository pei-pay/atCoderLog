#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  s = "o" + s + "i";
  int ans = 0;
  rep(i, s.size() - 1) {
    if (s[i] == s[i + 1]) ans++;
  }
  cout << ans << endl;
  return 0;
}