#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  ll x = 1;
  int k = 0;
  while (x * 2 <= n) {
    x *= 2;
    k++;
  }
  cout << k << endl;
  return 0;
}