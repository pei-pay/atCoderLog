#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int x = 1;
  rep(i, n) {
    x *= 2;
  }
  cout << x - 2 * n << endl;
  return 0;
}