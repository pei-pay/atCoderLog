#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;
using vl = vector<ll>;

/**
 * WA (いくつかのテストケース)
 */
int main() {
  int n, k;
  cin >> n >> k;

  vl a(n + 1);

  ll x = 0;
  ll z = 1000000000;
  rep(i, n + 1) {
    if (i < k) {
      a[i] = 1;
      x += a[i];
    }
  }

  for (int i = 0; i < (n + 1); ++i) {
    if (i < k) continue;
    a[i] = x;
    x -= a[i - k];
    x += a[i];
    x %= z;
  }

  cout << a[n] << endl;
  return 0;
}

