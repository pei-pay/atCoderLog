#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i, n) {
    int x = i + 1;
    int y = 1;
    if (x % 2 != 0) y *= -1;
    ans += y * x * x * x;
  }
  cout << ans << endl;
  return 0;
}