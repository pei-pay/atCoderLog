#include <iostream>
using namespace std;

int main() {
  int x, c;
  cin >> x >> c;
  int cnt = x / (1000 + c);
  int ans = cnt * 1000;
  cout << ans << endl;
  return 0;
}