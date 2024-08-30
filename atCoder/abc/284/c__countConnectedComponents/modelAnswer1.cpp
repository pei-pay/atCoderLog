#include <iostream>
#include<vector>
using namespace std;

/**
 * 深さ優先探索(DFS)を使う
*/

int N, M;
vector<vector<int>> g;
vector<int> vis;

void dfs(int c) {
  vis[c] = true;
  for (auto& d : g[c]) {
    if (vis[d]) continue;
    dfs(d);
  }
}

int main() {
  cin >> N >> M;
  g.resize(N);
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    --u, --v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  int ans = 0;
  // N要素の配列visitedを0で初期化する
  vis.resize(N);
  for (int i = 0; i < N; i++) {
    // vis[i] == 1 -> 何もしない
    // vis[i] == 0 
    // -> 頂点iを含む連結成分をDFSで求めて、連結成分に含まれる全ての頂点vについてvis[v]=trueにする
    // -> ans += 1する
    if (!vis[i]) ans++, dfs(i);
  }

  cout << ans << endl;

  return 0;
}