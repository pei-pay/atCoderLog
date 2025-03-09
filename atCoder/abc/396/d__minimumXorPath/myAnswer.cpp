#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
const long long INF = 1LL << 60;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  vector<ll> w(m);
  rep(i, m) {
    int u, v;
    cin >> u >> v >> w[i];
    --u, --v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  // 確認用;
  cout << "graph" << endl;
  rep(i, m) {
    rep(j, g.size()) {
      cout << g[i][j] + 1 << " ";
    }
    cout << endl;
  }

  ll ans = INF;
  vector<int> vis(n);
  vector<vector<int>> path(n);
  queue<int> q;
  q.push(0);
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : g[v]) {
      if (!vis[u]) {
        vis[u] = true;
        q.push(u);
      }
    }
  }

  cout << "path" << endl;
  rep(i, n) {
    cout << "i: " << i + 1 << "->";
    rep(j, path.size()) if (path[i][j]) cout << path[i][j] + 1 << " ";
    cout << endl;
  }

  // cout << ans << endl;

  return 0;
}