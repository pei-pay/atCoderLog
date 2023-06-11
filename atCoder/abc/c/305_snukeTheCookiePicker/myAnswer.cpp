#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int h, w;
  char s[509][509];

  cin >> h >> w;
  rep(i, h) {
    rep(j, w) {
      cin >> s[i][j];
    }
  }

  rep(i, h) {
    rep(j, w) {
      int cnt = 0;
      if (s[i][j] == '.') {
        if (i - 1 >= 0 && s[i - 1][j] == '#') cnt++;
        if (i + 1 < h && s[i + 1][j] == '#') cnt++;
        if (j - 1 >= 0 && s[i][j - 1] == '#') cnt++;
        if (j + 1 < w && s[i][j + 1] == '#') cnt++;
      }
      if (cnt >= 2) {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }



  return 0;
}