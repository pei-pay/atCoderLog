#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  // input
  int n;
  cin >> n;
  string s[109];
  rep(i, n) cin >> s[i];

  // get max length
  int m = 0;
  rep(i, n) {
    if (m < s[i].length()) {
      m = s[i].length();
    }
  }

  // get t[i]
  string t[109];
  rep(i, m) {
    for (int j = n - 1; j >= 0; j--) {
      if (s[j].size() > i && s[j][i]) {
        t[i] += s[j][i];
      }
      // FIXME: s[j-1][i] がなくても s[j-2][i] がある場合は * が必要になる
      else if (j - 1 >= 0 && s[j - 1].size() > i && s[j - 1][i]) {
        t[i] += '*';
      }
    }
  }

  // output
  rep(i, m) {
    cout << t[i] << endl;
  }

  return 0;
}