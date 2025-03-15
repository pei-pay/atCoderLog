#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  int cnt = 0;
  rep(i, h) cin >> s[i];
  rep(i, h) rep(j, w) {
    if (s[i][j] == '#') {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}