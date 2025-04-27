#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  for (string t : {"oxx", "xox", "xxo"}) {
    bool ok = true;
    for (int i = 0; i < s.size(); i++) {
      if (t[i % 3] != s[i]) ok = false;
    }
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}