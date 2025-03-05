#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> cnt(1000005); // 各要素の出現回数を記録するカウンター
  bool mult = false; // 重複があるかどうか

  const int INF = 1001001001; // 初期値として大きな数を設定
  int ans = INF;
  int r = 0; // 右端のインデックス
  rep(l, n) {
    // r を動かして重複要素が見つかるまで進める
    while (r < n && mult == false) {
      cnt[a[r]]++; // 要素の出現開始をカウント
      if (cnt[a[r]] == 2) mult = true; // 初めてこの要素が重複した場合、mult を true にする
      r++;
    }
    if (!mult) break; // 重複要素がなければ終了
    ans = min(ans, r - l);

    // a[l] を区間から除外する処理
    if (cnt[a[l]] == 2) mult = false; // a[l] を除外すると、重複が解消される場合は mult を false に戻す
    cnt[a[l]]--; // a[l] の出現回数を減らす
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}