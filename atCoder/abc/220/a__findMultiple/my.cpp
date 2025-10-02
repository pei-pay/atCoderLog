#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  rep(i, 1000) {
    int x = c * (i + 1);
    if (a <= x && x <= b) {
      cout << x << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}