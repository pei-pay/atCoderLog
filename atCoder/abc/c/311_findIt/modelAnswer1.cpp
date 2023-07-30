#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  rep(i, n) cin >> a[i + 1];

  vector<int> id(n + 1);
  int k = 1; // 地点vに何番目に訪れているか
  int v = 1; // k番目に訪れた地点v

  // サイクルを見つけるまでループを回す
  while (id[v] == 0) {
    id[v] = k;
    k++;
    v = a[v];
  }

  // サイクルの地点を配列ansに格納
  vector<int> ans;
  int len = k - id[v]; // len: サイクルの頂点数
  rep(i, len) {
    ans.push_back(v);
    v = a[v];
  }

  // 出力
  cout << ans.size() << endl;
  for (int v : ans) cout << v << ' ';
  cout << endl;

  return 0;
}