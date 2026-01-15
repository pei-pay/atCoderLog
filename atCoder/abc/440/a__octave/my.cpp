#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int x, y;
  cin >> x >> y;
  rep(i, y) {
    x *= 2;
  }
  cout << x << endl;
  return 0;
}