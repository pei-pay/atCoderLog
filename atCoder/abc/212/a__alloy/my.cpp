#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a > 0 && b == 0) cout << "Gold" << endl;
  if (a == 0 && b > 0) cout << "Silver" << endl;
  if (a > 0 && b > 0) cout << "Alloy" << endl;
  return 0;
}