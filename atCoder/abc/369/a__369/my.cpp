#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = 0;
  if (b - a == 0) ans = 1;
  else if ((b - a) % 2 == 0) ans = 3;
  else ans = 2;
  cout << ans << endl;
  return 0;
}
