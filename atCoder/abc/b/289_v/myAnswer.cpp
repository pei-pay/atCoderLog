#include <iostream>
#include<vector>
using namespace std;

/**
 * 解けず。
 * 深さ優先探索とかで解けるかと思ったが、
 * 数字をうまく吐き出せず、失敗
*/

int N, M, a[110];
vector<vector<int>> g;
vector<int> vis;

void dfs(int c, vector<int> a) {
  // cout << c << endl;
  vis[c] = 1;
  a.push_back(c);
  if (!g[c].size()) {
    for (int j = 0; j < a.size(); j++) {
      cout << a[j];
    }
  }
  for (auto& d : g[c]) {
    if (vis[d]) continue;
    dfs(d, a);
  }
}

int main() {
  cin >> N >> M;
  for (int i = 1; i <= M; i++) cin >> a[i];

  g.resize(N);
  vis.resize(N);

  for (int i = 1; i <= M; i++) {
    g[a[i]].push_back(a[i] + 1);
  }

  for (int i = 1; i <= N; i++) {
    // cout << i << "番目" << endl;
    // for (int j = 0; j < g[i].size(); j++) {
    //   cout << g[i][j] << endl;
    // }

    vector<int> a;
    if (!vis[i]) dfs(i, a);
  }

  return 0;
}