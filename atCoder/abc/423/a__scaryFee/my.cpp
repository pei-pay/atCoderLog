#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ll x, c;
  cin >> x >> c;
  ll d = x % 1000;
  ll xd = x - d;
  for (ll i = xd; i >= 1000; i -= 1000) {
    ll fee = i * c / 1000;
    if (i + fee <= x) {
      cout << i << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}