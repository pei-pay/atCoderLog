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
      else {
        t[i] += '*';
      }
    }
  }

  // output
  rep(i, m) {
    // remove '*'
    while(t[i].back() == '*') {
      t[i].pop_back();
    }
    cout << t[i] << endl;
  }

  return 0;
}