#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int y;
  cin >> y;

  rep(i, 4) {
    if ((y + i) % 4 == 2) {
      cout << y + i << endl;
      break;
    }
  }
  return 0;
}