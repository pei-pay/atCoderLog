#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi p(n);
  rep(i, n) cin >> p[i]; // 人 i の得点

  vi rank(n); // 人 i の順位
  int r = 1; // 現在の順位
  while (true) {
    int x = 0; // 現在の最大値
    // x を求める
    rep(i, n) {
      if (rank[i]) continue; // 順位が決まっている人は飛ばす
      if (x < p[i]) x = p[i];
    }
    if (!x) break; // m = 0 すなわち全員順位が決まっている場合に終了
    int k = 0; // 得点が x である人の数
    rep(i, n) {
      if (p[i] == x) {
        rank[i] = r;
        k++;
      }
    }
    r += k; // 順位を更新
  }
  rep(i, n) cout << rank[i] << endl;
  return 0;
}