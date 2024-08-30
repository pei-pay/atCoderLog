#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main() {
  int n, t;
  cin >> n >> t;
  vector<int> c(n), r(n);
  rep(i, n) cin >> c[i];
  rep(i, n) cin >> r[i];

  int ans = 0;

  auto get = [&](int i) {
    int x = 0;
    if (c[i] == t) x = 2;
    else if (c[i] == c[0]) x = 1;
    return P(x, r[i]);
  };

  auto win = [&](int a, int b) {
    return get(a) < get(b);
  };

  rep(i, n) {
    if (win(ans, i)) ans = i;
  }

  cout << ans + 1 << endl;

  return 0;
}