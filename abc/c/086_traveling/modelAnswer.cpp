// https://atcoder.jp/contests/abs/tasks/arc089_a
// パリティ: 「偶数」と「奇数」に関する性質

#include <iostream>
// #include <string>
// #include <algorithm>
using namespace std;

int main() {
  int N;
  int t[110000], x[110000], y[110000];
  cin >> N;
  // 初期値
  t[0] = x[0] = y[0] = 0;
  for (int i = 0; i < N; i++) cin >> t[i + 1] >> x[i + 1] >> y[i + 1];

  bool can = true;
  for (int i = 0; i < N; ++i) {
    // dt: 秒数
    int dt = t[i + 1] - t[i];

    // dist: 次に移動する距離
    // std::abs 絶対値 'absolute value'
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);
    if (dt < dist) can = false;
    // distが偶数ならdtは偶数。distが奇数ならdtは奇数。
    if (dist % 2 != dt % 2) can = false;
  }

  if (can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}