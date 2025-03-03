#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> cnt(1000005);
  int mult = 0;

  const int INF = 1001001001;
  int ans = INF;
  int r = 0;
  rep(l, n) {
    while (r < n && mult == 0) {
      cnt[a[r]]++;
      if (cnt[a[r]] == 2) mult++;
      r++;
    }
    if (mult == 0) break;
    ans = min(ans, r - l);
    if (cnt[a[l]] == 2) mult--;
    cnt[a[l]]--;
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}