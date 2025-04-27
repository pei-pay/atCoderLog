#include <iostream>
using namespace std;

int main() {
  int h;
  cin >> h;
  int ans = 0;
  int now = 0;
  while (now <= h) {
    now += 1 << ans;
    ans++;
  }
  cout << ans << endl;
  return 0;
}