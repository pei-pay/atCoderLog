#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

bool ok(int x, int y, int xi, int yi) {
  ll xd = x - xi;
  ll yd = y - yi;
  if (xd * xd + yd * yd == 5) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  for (int i = -2; i <= 2; i++) {
    for (int j = -2; j <= 2; j++) {
      int xi = x1 + i;
      int yi = y1 + j;
      if (ok(x1, y1, xi, yi) && ok(x2, y2, xi, yi)) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}