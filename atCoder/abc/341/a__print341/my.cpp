#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int x = n + n + 1;
  string ans(x, '1');
  rep(i, x) {
    if(i % 2 != 0) ans[i] = '0';
  }
  cout << ans << endl;
  return 0;
}