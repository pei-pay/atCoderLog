#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int r, c;
  cin >> r >> c;
  int n = 15;
  vector<vector<char>> g(n, vector<char>(n, '.'));

  rep(i, n) {
    if (i % 2 == 0) {
      for (int j = i; j < n - i; j++) {
        g[i][j] = '#';
        g[n - 1 - i][j] = '#';
      }
    }
  }
  rep(i, n) {
    if (i % 2 == 0) {
      for (int j = i; j < n - i; j++) {
        g[j][i] = '#';
        g[j][n - 1 - i] = '#';
      }
    }
  }

  if (g[c - 1][r - 1] == '#') {
    cout << "black" << "\n";
  }
  else cout << "white" << "\n";
  return 0;
}