#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(long long i = 0; i < (n); ++i)

int main() {
  long long n, q;
  cin >> n >> q;

  //  どの鳩がどの巣にいるのか -> どの鳩: 配列のindex + 1, どの巣: 配列の値
  vector<long long> x(n);

  // どの巣に鳩が何匹いるか
  vector<long long> y(n);

  rep(i, n) {
    x[i] = i + 1;
  }

  rep(i, n) {
    y[i] = 1;
  }

  // 複数鳩がいる巣の数
  int ans = 0;

  rep(i, q) {
    int z;
    long long  p, h;
    cin >> z;
    if (z == 1) {
      // 入力
      cin >> p >> h;
      long long beforeNest = x[p - 1];
      // 鳩を移動
      x[p - 1] = h;
      // 各巣の鳩数を更新
      y[beforeNest - 1] -= 1;
      y[h - 1] += 1;
      // 複数鳩がいる巣の数を更新
      if (y[h - 1] == 2) {
        ans++;
      }
      if (y[beforeNest - 1] == 1) {
        ans--;
      }
    }
    else {
      cout << ans << endl;
    }
  }


  return 0;
}