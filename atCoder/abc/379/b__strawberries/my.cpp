#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  int ans = 0;
  int cnt = 0;
  rep(i, n) {
    if (s[i] == 'O') {
      cnt++;
      if (cnt == k) {
        ans++;
        cnt = 0;
      }
    }
    else cnt = 0;
  }
  cout << ans << endl;
  return 0;
}