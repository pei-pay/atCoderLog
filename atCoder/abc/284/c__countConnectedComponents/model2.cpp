#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> g(N);
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  int ans;
  vector<int> vis(N);
  queue<int> Q;
  for (int i = 0; i < N; i++) {
    if (vis[i]) continue;
    ans++, vis[i] = true;
    Q.push(i);
    while (!Q.empty()) {
      int c = Q.front();
      Q.pop();
      for (auto& d : g[c]) {
        if (vis[d]) continue;
        vis[d] = true, Q.push(d);
      }
    }
  }

  cout << ans << endl;

  return 0;
}