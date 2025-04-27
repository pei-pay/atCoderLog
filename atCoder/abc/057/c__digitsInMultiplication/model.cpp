#include <iostream>
using namespace std;
using ll = long long;
const long long INF = 1LL << 60;

int calc_digit(long long n) {
  int res = 0;
  while (n > 0) {
    ++res;
    n /= 10;
  }
  return res;
}

int main() {
  ll n; cin >> n;
  ll ans = INF;
  for (ll a = 1; a * a <= n; ++a) {
    if (n % a != 0) continue;
    ll b = n / a;
    ll temp = max(calc_digit(a), calc_digit(b));
    ans = min(ans, temp);
  }
  cout << ans << endl;
  return 0;
}