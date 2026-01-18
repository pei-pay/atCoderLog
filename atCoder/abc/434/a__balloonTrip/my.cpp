#include <iostream>
using namespace std;

int main() {
  int w, b;
  cin >> w >> b;
  w *= 1000;
  cout << w / b + 1 << endl;
  return 0;
}