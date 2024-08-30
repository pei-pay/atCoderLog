#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main() {
  int a, b;
  cin >> a >> b;
  int ans;
  rep(i, b) ans *= a;
  cout << ans << endl;
  return 0;
}