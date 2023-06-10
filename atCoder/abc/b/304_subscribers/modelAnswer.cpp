#include <iostream>
using namespace std;
using ll = long long;
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

constexpr ll ten(int n) { return n ? 10 * ten(n - 1) : 1; };

int main() {
  int n;
  cin >> n;

  // [solution 1]
  // if (n < 1000) cout << n << '\n';
  // if (1000 <= n && n <= 9999) cout << n - n % 10 << '\n';
  // if (10000 <= n && n <= 99999) cout << n - n % 100 << '\n';
  // if (100000 <= n && n <= 999999) cout << n - n % 1000 << '\n';
  // if (1000000 <= n && n <= 9999999) cout << n - n % 10000 << '\n';
  // if (10000000 <= n && n <= 99999999) cout << n - n % 100000 << '\n';
  // if (100000000 <= n && n <= 999999999) cout << n - n % 1000000 << '\n';

  // [solution 2]
  if (n < 1000) cout << n << endl;
  rep1(i, 6) if (ten(i + 2) <= n && n < ten(i + 3)) cout << n - n % ten(i) << '\n';

  return 0;
}