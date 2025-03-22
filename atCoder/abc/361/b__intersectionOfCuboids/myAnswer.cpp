#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int x1, y1, z1, x2, y2, z2;
  int x3, y3, z3, x4, y4, z4;
  cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
  cin >> x3 >> y3 >> z3 >> x4 >> y4 >> z4;

  bool okx = false;
  bool oky = false;
  bool okz = false;
  if (x1 < x3) {
    if (x3 < x2) {
      okx = true;
    }
  }
  else {
    if (x1 < x4) {
      okx = true;
    }
  }
  if (y1 < y3) {
    if (y3 < y2) {
      oky = true;
    }
  }
  else {
    if (y1 < y4) {
      oky = true;
    }
  }
  if (z1 < z3) {
    if (z3 < z2) {
      okz = true;
    }
  }
  else {
    if (z1 < z4) {
      okz = true;
    }
  }

  if (okx && oky && okz) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}