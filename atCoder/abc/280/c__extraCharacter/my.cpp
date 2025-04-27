#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  rep(i, t.size()) {
    if (i < s.size() && s[i] == t[i]) {
      continue;
    }
    else {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}