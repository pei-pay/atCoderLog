#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int ans = 0;
  rep(i, n) {
    if (i + 2 >= n) break;
    if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
      ans++;
      i += 2;
    }
  }
  cout << ans << endl;

  return 0;
}