#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> t(n), x(n), y(n);
  rep(i, n) cin >> t[i] >> x[i] >> y[i];

  int ct = 0;
  int cx = 0;
  int cy = 0;

  bool can = true;
  rep(i, n) {
    int dt = t[i] - ct;
    int dx = abs(x[i] - cx);
    int dy = abs(y[i] - cy);

    int sum = dx + dy;
    if (dt < sum) {
      can = false;
      break;
    }
    else if (dt % 2 != sum % 2) {
      can = false;
      break;
    }
    else {
      ct = t[i];
      cx = x[i];
      cy = y[i];
    }
  }

  if (can) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}