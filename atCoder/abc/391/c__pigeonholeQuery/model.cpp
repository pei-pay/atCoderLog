#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> hole(n); // 鳩iがいる巣の番号
  rep(i, n) hole[i] = i; 
  vector<int> cnt(n, 1); // 巣iにいる羽数
  int ans = 0; // 2匹以上いる巣の数


  auto addCnt = [&](int h, int x) {
    if (cnt[h]  >= 2) ans--;
    cnt[h] += x;
    if (cnt[h] >= 2) ans++;
  };
  
  rep(qi, q) {
    int type;
    cin >> type;
    if (type == 1) {
      int p, h;
      cin >> p >> h;
      p--; h--;
      addCnt(hole[p], -1);
      hole[p] = h;
      addCnt(hole[p], 1);
    } else {
      cout << ans << '\n';
    }
  }

  return 0;
}