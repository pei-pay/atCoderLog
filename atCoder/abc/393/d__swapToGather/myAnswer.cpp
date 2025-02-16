#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

/**
 * 時間間に合わず
 *
 * 1を真ん中に寄せる方法で解きたいが、うまくいかず...
 */
int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;

  // 真ん中から左側
  int left = 0;
  for (int i = n / 2; i >= 0; i--) {
    if (s[i] == '0') {
      left++;
    }
    else {
      ans += left;
      left = n / 2 - i;
    }
  }

  // 真ん中から右側
  int right = 0;
  for (int i = n / 2 + 1; i < n; i++) {
    if (s[i] == '0') {
      right++;
    }
    else {
      ans += right;
      right = i - n / 2 + 1;
    }
  }
  cout << ans << endl;

  return 0;
}