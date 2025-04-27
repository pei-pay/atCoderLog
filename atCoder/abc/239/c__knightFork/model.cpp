#include <iostream>
#include <set>
using namespace std;
using P = pair<int, int>;

set<P> f() {
  set<P> res;
  int sx, sy;
  cin >> sx >> sy;
  for (int x = -2; x <= 2; ++x) {
    for (int y = -2; y <= 2; ++y) {
      if (x * x + y * y != 5) continue;
      res.emplace(sx + x, sy + y);
    }
  }
  return res;
}

int main() {
  set<P> as = f();
  set<P> bs = f();
  for (P p : bs) {
    if (as.count(p)) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}