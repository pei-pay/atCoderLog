#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n), t(n);
  rep(i, n) cin >> s[i] >> t[i];

  rep(i, n) {
    rep(j, n) {
      if (i == j) continue;
      if (s[i] == s[j] && t[i] == t[j]) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}