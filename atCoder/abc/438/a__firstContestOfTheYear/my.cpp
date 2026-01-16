#include <iostream>
using namespace std;

int main() {
  int d, f;
  cin >> d >> f;
  int x = (d - f) % 7;
  cout << 7 - x << endl;
  return 0;
}