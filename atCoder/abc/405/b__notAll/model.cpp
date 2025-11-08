#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n, m;
  cin >> n >> m;
  vi a(n);
  rep(i, n) cin >> a[i];

  for (int i = n; i > 0; --i) {
    vi b(m, 0);
    rep(j, i) {
      if (a[j] <= m) {
        b[a[j] - 1] = 1;
      }
    }
    bool flag = true;
    rep(j, m) {
      if (b[j] == 0) flag = false;
    }
    if (!flag) {
      cout << n - i << endl;
      return 0;
    }
  }
  cout << n << endl;
  return 0;
}