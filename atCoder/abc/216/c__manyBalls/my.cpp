#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long n;
  cin >> n;

  long long x = 1;
  string s = "";

  while (s.size() < 120) {
    if (x == n) break;
    if (n % 2 == 0 && x <= n / 2) {
      n /= 2;
      s += "B";
    }
    else {
      n -= 1;
      s += "A";
    }
  }
  reverse(s.begin(), s.end());
  cout << "A" + s << endl;
  return 0;
}