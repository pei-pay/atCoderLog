#include <iostream>

using namespace std;

int GCD(int a, int b) {
  if (b == 0) return a;
  return GCD(b, a % b);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, d, k;
    cin >> n >> d >> k;
    --k;
    int a = n / GCD(n, d);
    cout << (long long)d * k % n + k / a << '\n';
  }
}