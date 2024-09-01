#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int h, w, ay, ax;
  cin >> h >> w;
  cin >> ay >> ax;
  ay--;
  ax--;
  vector<vector<char>> c(h, vector<char>(w));
  rep(i, h) {
    rep(j, w) {
      cin >> c[i][j];
    }
  }
  string x;
  cin >> x;

  rep(i, x.size()) {
    if (x[i] == 'L') {
      if (ax - 1 >= 0 && c[ay][ax - 1] == '.') {
        ax--;
      }
    }
    else if (x[i] == 'R') {
      if (ax + 1 < w && c[ay][ax + 1] == '.') {
        ax++;
      }
    }
    else if (x[i] == 'U') {
      if (ay - 1 >= 0 && c[ay - 1][ax] == '.') {
        ay--;
      }
    }
    else if (x[i] == 'D') {
      if (ay + 1 < h && c[ay + 1][ax] == '.') {
        ay++;
      }
    }
  }

  cout << ay + 1 << " " << ax + 1 << endl;

  return 0;
}