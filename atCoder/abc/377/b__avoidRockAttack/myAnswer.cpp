#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n = 8;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  rep(i, n) {
    rep(j, n) {
      if (s[i][j] == '#') {
        rep(y, n) {
          if(s[y][j] != '#') s[y][j] = 'x';
        }
        rep(x, n) {
          if (s[i][x] != '#') s[i][x] = 'x';
        }
      }
    }
  }

  int cnt = 0;
  rep(i, n) {
    rep(j, n) {
      if (s[i][j] == '.') cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}