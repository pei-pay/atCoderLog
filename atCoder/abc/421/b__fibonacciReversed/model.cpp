#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;

  int n = 10;
  vector<ll> a(n);
  a[0] = x;
  a[1] = y;
  for (int i = 2; i < n; i++) {
    ll num = a[i - 1] + a[i - 2];
    ll rev = 0;
    while (num > 0) {
      rev = rev * 10 + num % 10;
      num /= 10;
    }
    a[i] = rev;
  }
  cout << a[n - 1] << endl;
  return 0;
}
