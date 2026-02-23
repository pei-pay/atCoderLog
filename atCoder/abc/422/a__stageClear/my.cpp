#include <iostream>
using namespace std;

int main() {
  int i, j;
  char c;
  cin >> i >> c >> j;

  if (j < 8) {
    cout << i << c << j + 1 << endl;
  }
  else {
    cout << i + 1 << c << 1 << endl;
  }
  return 0;
}