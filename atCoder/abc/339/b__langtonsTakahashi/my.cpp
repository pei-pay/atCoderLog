#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int h, w, n;
  cin >> h >> w >> n;

  vector<vector<char>> g(h, vector<char>(w));
  rep(i, h) rep(j, w) g[i][j] = '.';


  int x = 0, y = 0;
  char dir = 'n'; // n, e, s, w;

  rep(i, n) {
    if (g[y][x] == '.') {
      g[y][x] = '#';
      if(dir == 'n') {
        dir = 'e';
        x++;
      } else if (dir == 'e') {
        dir = 's';
        y++;  
      } else if (dir == 's') {
        dir = 'w';
        x--;
      } else if (dir == 'w') {
        dir = 'n';
        y--;
      }
    } else {
      g[y][x] = '.';
      if(dir == 'n') {
        dir = 'w';
        x--;
      } else if (dir == 'e') {
        dir = 'n';
        y--;
      } else if (dir == 's') {
        dir = 'e';
        x++;
      } else if (dir == 'w') {
        dir = 's';
        y++;
      }
    }
    if (x == -1) {
      x = w - 1;
    } else if (x == w) {
      x = 0;
    } else if (y == -1) {
      y = h - 1;
    } else if (y == h) {
      y = 0;
    }
  }

  // output
  rep(i, h) {
    rep(j, w) cout << g[i][j];
    cout << endl;
  }
  return 0;
}