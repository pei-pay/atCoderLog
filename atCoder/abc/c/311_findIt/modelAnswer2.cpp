#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  rep(i, n) cin >> a[i + 1];

  /**
   * 最初にn回ループを回してたどり着く頂点をvとする
   *
   * vは必ずサイクルの頂点の1つになる
  */
  int v = 1;
  rep(i, n) v = a[v];


  // サイクルの頂点の1つがわかったので、あとはその頂点に戻ってくるまでの経路を調べればいい
  int sv = v;
  vector<int> ans;
  do {
    ans.push_back(v);
    v = a[v];
  } while (v != sv);

  // 出力
  cout << ans.size() << endl;
  for (int v : ans) cout << v << ' ';
  cout << endl;

  return 0;
}