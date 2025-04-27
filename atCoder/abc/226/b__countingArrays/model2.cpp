#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<vector<int>> a(n);
  rep(i, n) {
    int l;
    cin >> l;
    a[i] = vector<int>(l);
    rep(j, l) cin >> a[i][j];
  }
  sort(a.begin(), a.end());
  int ans = 1;
  rep(i, n - 1) if (a[i] != a[i + 1]) ++ans;
  cout << ans << endl;
  return 0;
}