#include <iostream>
using namespace std;

int main() {
  int n, p, q, r, s;
  int a[101];

  cin >> n >> p >> q >> r >> s;
  for (int i = 1; i <= n; i++) cin >> a[i];

  for (int i = 1; i <= n; i++) {
    if (p <= i && i <= q) cout << a[i + r - p];
    else if (r <= i && i <= s) cout << a[i + p - r];
    else cout << a[i];
    if (i < n) cout << " ";
    else cout << endl;
  }
  return 0;
}