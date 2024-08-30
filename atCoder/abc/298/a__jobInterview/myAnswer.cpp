#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  bool ans1 = false;
  bool ans2 = true;
  rep(i, n) {
    if (s[i] == 'o') ans1 = true;
    if (s[i] == 'x') ans2 = false;
  }

  if (ans1 && ans2) cout << "Yes" << "\n";
  else cout << "No" << "\n";

  return 0;
}