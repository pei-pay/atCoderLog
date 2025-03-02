#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<vector<char>> a(n, vector<char>(n));
  rep(i, n) rep(j, n) a[i][j] = '?';
  rep(i, n) {
    int z = i + 1;
    int j = n + 1 - z;
    if (z <= j) {
      bool white = true;
      if (z % 2 == 0) white = true;
      else white = false;
      for (int x = i; x < j; x++) {
        for (int y = i; y < j; y++) {
          if (white) a[x][y] = '.';
          else a[x][y] = '#';
        }
      }
    }
  }
  rep(i, n) {
    rep(j, n) {
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}