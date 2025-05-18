#include <iostream>
using namespace std;
using P = pair<int, int>;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (P(c, d) < P(a, b)) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}