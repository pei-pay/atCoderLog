#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  rep(i, s.size()) {
    bool flag = false;
    rep(j, s.size()) {
      if (i == j) continue;
      if (s[i] == s[j]) flag = true;
    }
    if (!flag) {
      cout << s[i] << endl;
      return 0;
    }
  }
  return 0;
}