#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int r, c;
  cin >> r >> c;
  r--;c--;
  int n = 2;
  vector<vector<int>> a(n, vector<int>(n));
  rep(i, n) {
    rep(j, n) cin >> a[i][j];
  }

  cout << a[r][c] << endl;
  return 0;
}