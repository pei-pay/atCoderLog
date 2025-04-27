#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int h, w, n;
string t;
vector<string> s;

bool check_next_move(int y, int x, int index) {
  if (index == n) {
    return true;
  }
  else if (t[index] == 'L') {
    if (s[y][x - 1] == '.') {
      return check_next_move(y, x - 1, ++index);
    }
    else {
      return false;
    }
  }
  else if (t[index] == 'R') {
    if (s[y][x + 1] == '.') {
      return check_next_move(y, x + 1, ++index);
    }
    else {
      return false;
    }
  }
  else if (t[index] == 'U') {
    if (s[y - 1][x] == '.') {
      return check_next_move(y - 1, x, ++index);
    }
    else {
      return false;
    }
  }
  else if (t[index] == 'D') {
    if (s[y + 1][x] == '.') {
      return check_next_move(y + 1, x, ++index);
    }
    else {
      return false;
    }
  }
  else {
    return false;
  }
}

int main() {
  cin >> h >> w >> n;
  cin >> t;
  s.resize(h);
  rep(i, h) cin >> s[i];

  int ans = 0;
  rep(i, h) {
    rep(j, w) {
      if (s[i][j] == '.') {
        if (check_next_move(i, j, 0)) ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}