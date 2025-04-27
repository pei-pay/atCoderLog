#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  bool out = true;
  int ans = 0;
  rep(i, n) {
    if (s[i] == "logout") out = true;
    else if (s[i] == "login") out = false;
    else if (s[i] == "private" && out) ans++;
  }

  cout << ans << endl;
  return 0;
}

