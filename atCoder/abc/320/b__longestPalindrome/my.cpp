#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)


/**
 * WA
 * "abcccde"のように文字列の中間が回文になっている場合を考慮できてない
*/
int main() {
  string s;
  cin >> s;

  int ans = 0;
  rep(i, s.size()) {
    string x = s.substr(0, s.size() - i);
    bool flag = true;
    rep(j, x.size()) {
      if (x[j] == x[x.size() - 1 - j]) continue;
      else {
        flag = false;
        break;
      }
    }
    if (flag) {
      ans = max(ans, (int)x.size());
    }
  }

  rep(i, s.size()) {
    string x = s.substr(i, s.size() - i);
    bool flag = true;
    rep(j, x.size()) {
      if (x[j] == x[x.size() - 1 - j]) continue;
      else {
        flag = false;
        break;
      }
    }
    if (flag) {
      ans = max(ans, (int)x.size());
    }
  }

  cout << ans << endl;

  return 0;
}