#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<pair<int, ll>>> g(n);
  rep(i, m) {
    int a, b;
    ll w;
    cin >> a >> b >> w;
    --a; --b;
    g[a].emplace_back(b, w);
    g[b].emplace_back(a, w);
  }

  ll ans = 2e18;
  auto dfs = [&](auto dfs, int v, vector<bool> visited, ll x) -> void {
    visited[v] = true;
    if (v == n - 1) {
      ans = min(ans, x);
      return;
    }
    for (auto& [to, w] : g[v]) {
      if (visited[to]) continue;
      dfs(dfs, to, visited, x ^ w);
    }
    };
  dfs(dfs, 0, vector<bool>(n), 0);

  cout << ans << endl;
  return 0;
}