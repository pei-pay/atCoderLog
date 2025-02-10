#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int ans = 0;
  rep(i, n) {
    int x = i + 1;
    int o = x / 10000;
    int p = x % 10000 / 1000;
    int q = x % 1000 / 100;
    int r = x % 100 / 10;
    int s = x % 10;
    int sum = o + p + q + r + s;
    if (a <= sum && sum <= b) {
      ans += x;
    }
  }

  cout << ans << endl;

  return 0;
}