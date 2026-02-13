#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  rep(i, 10) {
    if (i != (a + b)) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}