#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  int ans = 0;
  rep(i, n) {
    int x = i + 1;
    int sum = 0;
    while (x > 0) {
      sum += (x % 10);
      x /= 10;
    }
    if (sum == k) ans++;
  }
  cout << ans << endl;
  return 0;
}