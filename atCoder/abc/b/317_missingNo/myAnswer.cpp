#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  int a[109];
  cin >> n;
  rep(i, n) cin >> a[i];

  sort(a, a + n);

  rep(i, n) {
    if (a[i + 1] != a[i] + 1) {
      cout << a[i] + 1 << endl;
      return 0;
    }
  }

  return 0;
}
