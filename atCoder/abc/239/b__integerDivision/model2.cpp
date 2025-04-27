#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ll x;
  cin >> x;
  ll ans;
  if (x >= 0) {
    ans = x / 10;
  }
  else {
    ans = -((-x + 9) / 10);
  }
  cout << ans << endl;
  return 0;
}