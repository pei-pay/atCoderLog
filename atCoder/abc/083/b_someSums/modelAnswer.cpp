#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 1; i <= (n); ++i)

int calc(int x) {
  int res = 0;
  while (x > 0) {
    res += x % 10;
    x /= 10;
  }
  return res;
}

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int ans = 0;
  rep(i, n) {
    int sum  = calc(i);
    if (a <= sum && sum <= b) ans += i;
  }

  cout << ans << endl;

  return 0;
}