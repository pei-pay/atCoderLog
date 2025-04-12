#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n = 12;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int ans = 0;
  rep(i, n) {
    if (s[i].size() == i + 1) ans++;
  }

  cout << ans << endl;
  return 0;
}