#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int s, t;
  cin >> s >> t;

  int cnt = 0;
  rep(i, 101) {
    rep(j, 101) {
      rep(k, 101) {
        if (i + j + k <= s && i * j * k <= t) {
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}