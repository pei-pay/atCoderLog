#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int ans = 0;
  rep(i, s.size()) {
    rep(j, s.size()) {
      rep(k, s.size()) {
        if (i < j && j < k) {
          if (j - i == k - j) {
            if (s[i] == 'A' && s[j] == 'B' && s[k] == 'C') {
              ans++;
            }
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}