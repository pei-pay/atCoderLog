#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;

  ll m = 1;
  rep(i, k) m *= 10;

  ll x = 1;
  rep(i, n) {
    ll a;
    cin >> a;
    if((m - 1) / x < a) x = 1;
    else x *= a;
  }

  cout << x << endl;
  return 0;
}