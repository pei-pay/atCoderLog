
#include <iostream>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  int k = 0;
  while ((1LL << k) <= n) k++;
  cout << k - 1 << endl;
  return 0;
}