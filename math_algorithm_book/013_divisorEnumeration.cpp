#include <iostream>
// #include <string>
// #include <algorithm>
using namespace std;

// 約数列挙
int main() {
  long long n;
  cin >> n;
  for (long long i = 1; i * i <= n; i++) {
    if (n % i != 0) continue;
    cout << i << endl;  // i を約数に追加
    if (i != n / i) {
      cout << n / i << endl;  // i ≠ N/i のとき、N/i も約数に追加
    }
  }

  return 0;
}