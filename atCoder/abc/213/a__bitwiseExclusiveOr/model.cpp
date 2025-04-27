#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  rep(i, 256) {
    if ((a ^ i) == b) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}