#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  for(char c = 'a'; c <= 'z'; c++) {
    bool ok = true;
    rep(i, s.size()) {
      if(s[i] == c) ok = false;
    }

    if (ok) {
      cout << c << endl;
      return 0;
    }
  }

  return 0;
}