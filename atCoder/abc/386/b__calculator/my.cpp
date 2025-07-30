#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  string b;
  cin >> b;
  int ans = 0;
  rep(i, b.size()) {
    if (i + 1 < b.size() && b[i] == '0' && b[i + 1] == '0') {
      ans++;
      i++;
    } else {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}