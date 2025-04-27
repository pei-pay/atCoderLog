#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

/**
 * WA
 * 最大値の求め方が間違っている
*/

int n, m;
vector<int> c;
vector<vector<int>> g;
vector<int> visited;
int sum = 0;
void dfs(int x) {
  visited[x] = true;
  sum += c[x];
  // FIXME: 一筆書きのように進めて最大値を求める必要がある
  for (auto& y : g[x]) {
    if (visited[y]) continue;
    dfs(y);
  }
}

int main() {
  cin >> n >> m;
  g.resize(n);
  c.resize(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b >> c[i];
    --a, --b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  int max = 0;
  rep(i, n) {
    visited.resize(n);
    sum = 0;
    dfs(i);
    if (sum > max) {
      max = sum;
    };
  }

  cout << max << endl;
  return 0;
}