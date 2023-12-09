#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/*
 * 必要な卵の個数が高々100 個であることから、どのパックも高々100 個買えば十分です。
 * よって、各パックを買う個数を0から100まで全探索することでこの問題を解くことができます。
 *
*/
int main() {
  int n, s, m, l;
  cin >> n >> s >> m >> l;
  int ans = 100000000;
  rep(i, 101) rep(j, 101) rep(k, 101) {
    if (i * 6 + j * 8 + k * 12 >= n) {
      ans = min(ans, i * s + j * m + k * l);
    }
  }
  cout << ans << endl;

  return 0;
}