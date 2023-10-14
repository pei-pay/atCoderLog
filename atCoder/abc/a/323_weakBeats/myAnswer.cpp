#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;

  bool ans = true;
  rep(i, 16) {
    if ((i + 1) % 2 == 0) {
      if (s[i] != '0') ans = false;
    }
  }

  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}