#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
  vi l(m), r(m);
  rep(i, m) {
    int li, ri;
    cin >> li >> ri;
    li--;ri--;
    l[i] = li;
    r[i] = ri;
  }

  vi x(n); // 壁 x が何個の砲台に守られているか

  // TLE
  rep(i, m) {
    for(int j = l[i]; j <= r[i]; j++) {
      x[j]++;
    }
  }

  int ans = m;
  rep(i, n) {
    ans = min(x[i], ans);
  }

  cout << ans << endl;
  return 0;
}