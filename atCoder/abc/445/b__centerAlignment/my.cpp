#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  int m = 0;
  rep(i, n) {
    cin >> s[i];
    int x = s[i].size();
    m = max(m, x);
  };

  rep(i, n) {
    int x = (m - s[i].size()) / 2;
    rep(i, x) cout << ".";
    cout << s[i];
    rep(i, x) cout << ".";
    cout << "\n";
  }
  return 0;
}