#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, w) {
    rep(j, h) cout << a[j][i] << " ";
    cout << "\n";
  }
  return 0;
}