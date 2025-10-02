#include <iostream>
using namespace std;

signed main() {
  int a, b, c;
  cin >> a >> b >> c;
  int y = b / c * c; // y は b 以下で最小の c の倍数
  if (a <= y) {
    cout << y << endl;
  }
  else {
    cout << -1 << endl;
  }
  return 0;
}
