#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i += 2) {
    int x = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) x++;
    }
    if (x == 8) ans++;
  }
  cout << ans << endl;
  return 0;
}