#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int x, n;
  cin >> x >> n;
  vi w(n);
  rep(i, n) cin >> w[i];
  vi is(n, 0);
  int q;
  cin >> q;
  rep(i, q) {
    int p;
    cin >> p;
    p--;
    if (is[p]) {
      x -= w[p];
      is[p] = 0;
    } else {
      x += w[p];
      is[p] = 1;
    }
    cout << x << '\n';
  }
  return 0;
}