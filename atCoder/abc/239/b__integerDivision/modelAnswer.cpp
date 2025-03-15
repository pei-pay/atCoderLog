#include <iostream>
using namespace std;
using ll = long long;
int main() {
  ll x;
  cin >> x;
  if (x < 0 and x % 10 != 0) {
    cout << x / 10 - 1 << "\n";
  }
  else {
    cout << x / 10 << "\n";
  }

  return 0;
}