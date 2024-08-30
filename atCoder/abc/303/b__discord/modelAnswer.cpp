#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(m, vector<int>(n));
  rep(i, m)rep(j, n) cin >> a[i][j];
  rep(i, m)rep(j, n) a[i][j]--;

  vector<vector<bool>> g(n, vector<bool>(n));
  rep(i, m)rep(j, n - 1) {
    g[a[i][j]][a[i][j - 1]] = true;
  }

  int ans = 0;
  rep(x, n)rep(y, x) {
    if (g[x][y] || g[y][x]) continue;
    ans++;
  }

  cout << ans << endl;

  return 0;
}