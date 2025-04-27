#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  bool ans = false;
  bool ans2 = false;
  bool ans3 = false;
  rep(i, s.size()) {
    if (s[i] == 'A') {
      ans = true;
    }
    else if (s[i] == 'B') {
      ans2 = true;
    }
    else if (s[i] == 'C') {
      ans3 = true;
    }
  }

  if (ans && ans2 && ans3) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}