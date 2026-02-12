#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<int>> a(h, vector<int>(w));
  rep(i, h) {
    rep(j, w) {
      cin >> a[i][j];
    }
  }
  vi b(n);
  rep(i, n) cin >> b[i];
  int ans = 0;
  rep(hi, h) {
    int cnt = 0;
    rep(wi, w) {
      rep(ni, n) {
        if (b[ni] == a[hi][wi]) cnt++;
      }
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}