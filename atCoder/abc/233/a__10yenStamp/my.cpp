#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  int z = y - x;

  if (z <= 0) {
    cout << 0 << endl;
  }
  else {
    cout << (z % 10 == 0 ? z / 10 : z / 10 + 1) << endl;
  }
  return 0;
}