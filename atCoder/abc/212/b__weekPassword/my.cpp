#include <iostream>
using namespace std;

bool test(int a, int b) {
  if (a == 9 && b == 0) return true;
  else if (a + 1 == b) return true;
  else return false;
}
int main() {
  int x;
  cin >> x;
  int a, b, c, d;
  a = x / 1000;
  b = x % 1000 / 100;
  c = x % 1000 % 100 / 10;
  d = x % 1000 % 100 % 10;
  if ( a == b && b == c && c == d) cout << "Weak" << endl;
  else if (test(a,b) && test(b,c) && test(c,d)) cout << "Weak" << endl;
  else cout << "Strong" << endl;
  return 0;
}