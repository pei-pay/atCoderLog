#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int x, y, z;
  cin >> x >> y >> z;

  rep(i, 10000) {
    if (x + i == (y + i) * z) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}