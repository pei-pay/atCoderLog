#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  // 入力
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, m) cin >> a[i];

  // 1で初期化
  vector<int> x(n, 1);

  // 花火がある日は0にする
  rep(i, m) {
    x[a[i] - 1] = 0;
  }

  for (int i = n - 1; i >= 0; i--) {
    if (x[i] == 0) continue;
    if (i == n - 1) continue;
    if (x[i + 1] == 0) continue;
    x[i] = x[i + 1] + 1;
  }

  // 出力
  rep(i, n) {
    cout << x[i] << endl;
  }
  return 0;
}