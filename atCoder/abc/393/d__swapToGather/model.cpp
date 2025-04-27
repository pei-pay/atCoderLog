#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main() {
  int n;
  string s;
  cin >> n >> s;
  // 1 の個数
  int c1 = 0;
  for (char c : s) {
    if (c == '1') ++c1;
  }
  
  int now = 0;
  long long ans = 0;
  for (char c : s) {
    if (c == '0') {
      ans += min(now, c1 - now);
    }
    else {
      ++now;
    }
  }
  cout << ans << endl;
  return 0;
}