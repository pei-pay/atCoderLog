#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  bool ans = true;

  bool startB = false;
  bool startC = false;
  rep(i, s.size()) {
    if (!startB && s[i] == 'B') {
      startB = true;
    }
    if (!startC && s[i] == 'C') {
      startC = true;
    }
    if (startB && s[i] == 'A') ans = false;
    if (startC && (s[i] == 'A' || s[i] == 'B')) ans = false;
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}