#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s, t;
  cin >> s >> t;
  bool flag = true;
  rep(i, s.size()) {
    if (s[i] != t[i]) flag = false;
  }
  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}