#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i <= (n); ++i)

int main() {
  int a,b,c,x;
  cin >> a >> b >> c >> x;

  int ans = 0;
  rep(ai, a) {
    rep(bi, b) {
      rep(ci, c) {
        if (500 * ai + 100 * bi + 50 * ci == x) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}