#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n, 0));

  int r = 0;
  int c = (n - 1) / 2;
  int k = 1;
  a[r][c] = k;

  rep(i, n * n - 1) {
    k++;
    int x = ((r - 1 % n) + n) % n;
    int y = (c + 1) % n;
    if (a[x][y] == 0) {
      a[x][y] = k;
      r = x;
      c = y;
    }
    else {
      int x = (r + 1) % n;
      a[x][c] = k;
      r = x;
    }
  }
  rep(i, n) {
    rep(j, n) cout << a[i][j] << " ";
    cout << endl;
  }
  return 0;
}