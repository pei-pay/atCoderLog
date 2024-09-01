#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

/*
 * 「周期性」 に着目
 */
int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  ll t = 0;
  rep(i, n) {
    // 現在の t の値によらず、次の 3 回の行動で先頭の敵の体力を 5 減らすことができる
    int x = h[i] / 5;
    t += x * 3;
    h[i] -= x * 5;
    while (h[i] > 0) {
      t++;
      if (t % 3 == 0) h[i] -= 3;
      else h[i]--;
    }
  }

  cout << t << endl;

  return 0;
}