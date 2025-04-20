#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  // 食材 i が使われている料理の番号: menuList[i][j]
  vector<vector<int>> menuList(n);
  // 料理 i に含まれる苦手な食材の個数: cnt[i]
  vector<int> cnt(m);
  int ans = 0;
  rep(i, m) {
    int k;
    cin >> k;
    cnt[i] = k;
    rep(j, k) {
      int a;
      cin >> a;
      a--;
      menuList[a].push_back(i);
    }
  }

  rep(i, n) {
    int b;
    cin >> b;
    b--;
    for(int j: menuList[b]) {
      cnt[j]--;
      if (cnt[j] == 0) ans++;
    }
    cout << ans << "\n";
  }

  return 0;
}