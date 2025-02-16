#include <iostream>
#include <map>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  int ans = 0;
  map<pair<int, int>, int> mp;
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    if (u == v) {
      ans++;
      continue;
    }
    if (u > v) swap(u, v);
    mp[{u, v}]++;
  }
  for (auto& [edge, k] : mp) ans += k - 1;
  cout << ans << endl;
  return 0;
}