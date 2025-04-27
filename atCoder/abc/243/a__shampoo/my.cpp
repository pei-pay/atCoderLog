#include <iostream>
using namespace std;

int main() {
  int v, a, b, c;
  cin >> v >> a >> b >> c;

  while (v >= 0) {
    if (v - a < 0) {
      cout << "F" << "\n";
      return 0;
    }
    v -= a;
    if (v - b < 0) {
      cout << "M" << "\n";
      return 0;
    }
    v -= b;
    if (v - c < 0) {
      cout << "T" << "\n";
      return 0;
    }
    v -= c;
  }

  return 0;
}