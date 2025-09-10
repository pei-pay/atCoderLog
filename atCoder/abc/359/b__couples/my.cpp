#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int nn = 2 * n;
  int x = 0, y = 0;

  int cnt = 0;
  rep(i, nn) {
    int a;
    cin >> a;
    if (i == 0) {
      x = a;
      continue;
    }

    if (x == a && y != 0 && y != a) {
      x = y;
      y = a;
      cnt++;
    }
    else if (y == 0) {
      y = a;
    } else {
      x = y;
      y = a;
    }
  };

  cout << cnt << endl;
  return 0;
}