#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;

  int n = s.size();
  bool ans = true;
  bool once = false;
  rep(i, n) {
    if(s[i] == t[i]) continue;
    else if(!once && i < n - 1 && s[i] == t[i + 1]) {
      once = true;
      continue;
    }
    else if (i > 0 && s[i] == t[i - 1]) {
      continue;
    }
    else ans = false;
  }
  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}