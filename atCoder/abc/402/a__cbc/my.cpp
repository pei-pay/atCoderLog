#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  string ans;
  rep(i, s.size()) {
    if (isupper(s[i])) ans += s[i];
  }

  cout << ans << endl;

  return 0;
}