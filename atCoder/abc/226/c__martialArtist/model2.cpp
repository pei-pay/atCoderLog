#include <iostream>
#include <vector>
#include <functional>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

// 深さ優先探索で解く
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

  // DFS関数の定義
  function<void(int)> dfs = [&](int v) {
    if (learned[v]) return; // 既に学習済みの場合は終了
    learned[v] = true; // 学習済みにする
    for (int u : a[v]) {
      dfs(u); // 前提技を再帰的に学習
    }
    total_time += t[v]; // 技の時間を合計
    };

  // 最後の技からDFSを開始
  dfs(n - 1);

  cout << total_time << endl;
  return 0;
}