#include <iostream>
using namespace std;
using ll = long long;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int main() {
  ll a, b;
  cin >> a >> b;
  ll ans = (a + b - 1) / b;

  cout << ans << endl;
  return 0;
}