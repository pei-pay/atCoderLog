#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  vector<vector<int>> a(n);
  rep(i, n) {
    int k;
    cin >> t[i] >> k;
    a[i] = vector<int>(k);
    rep(j, k) {
      cin >> a[i][j];
      a[i][j]--;
    }
  }

  vector<bool> learned(n, false);
  ll total_time = 0;
  queue<int> q;

  // 最後の技からBFSを開始
  q.push(n - 1);
  learned[n - 1] = true;

  while (!q.empty()) {
    int v = q.front();
    q.pop();
    total_time += t[v]; // 技の時間を合計

    for (int u : a[v]) {
      if (!learned[u]) {
        learned[u] = true;
        q.push(u);
      }
    }
  }

  cout << total_time << endl;
  return 0;
}