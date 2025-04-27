#include <iostream>
#include <algorithm>
using namespace std;

long long getDigit(long long num) {
  long long digit = 0;
  while (num != 0) {
    num /= 10;
    digit++;
  }
  return digit;
}

int main() {
  long long n;
  cin >> n;
  long long ans = 10000000000LL;
  for (long long i = 1; i * i <= n; ++i) {
    if (n % i == 0) {
      long long j = n / i;
      long long x;
      if (i > j) x = i;
      else x = j;
      long long digit = getDigit(x);
      if (digit < ans) {
        ans = digit;
      }
    }
  }
  cout << ans << endl;
  return 0;
}