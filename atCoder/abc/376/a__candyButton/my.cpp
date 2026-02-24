#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, c;
  cin >> n >> c;
  int ans = 0;
  int x = 0;
  rep(i, n) {
    int t;
    cin >> t;
    if (i == 0) {
      x = t;
      ans++;
    }
    else {
      if ((t - x) >= c) {
        ans++;
        x = t;
      }
    }
  }

  cout << ans << endl;
  return 0;
}