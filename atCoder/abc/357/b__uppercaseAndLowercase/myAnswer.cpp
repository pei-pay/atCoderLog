#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  int up = 0;
  rep(i, s.size()) {
    if (isupper(s[i])) up++;
  }

  if (up > s.size() / 2) {
    rep(i, s.size()) {
      if (islower(s[i])) cout << char(s[i] - 32);
      else cout << s[i];
    }
  }
  else {
    rep(i, s.size()) {
      if (isupper(s[i])) cout << char(s[i] + 32);
      else cout << s[i];
    }
  }




  cout << endl;

  return 0;
}