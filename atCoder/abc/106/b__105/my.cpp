#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  int n;
  cin >> n;
  int ans = 0;
  rep(i, n) {
    if (i % 2 == 0) continue;
    int x = 0;
    rep(j, n) {
      if (i % j == 0) x++;
    }
    if (x == 8) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}