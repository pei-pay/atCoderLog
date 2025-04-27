#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 分割したい文字列
const vector<string> strs = { "dream", "dreamer", "erase", "eraser" };

int main() {
  string s;
  cin >> s;

  // 文字列 s の最初の i 文字分について、条件を満たすように区間分割することが可能か
  vector<bool> dp(s.size() + 1, false);
  dp[0] = true;
  for (int i = 1; i <= s.size(); ++i) {
    // 4 つの文字列を順に試していく
    for (auto str : strs) {
      if (i >= str.size() && dp[i - str.size()] && s.substr(i - str.size(), str.size()) == str) {
        dp[i] = true;
      }
    }
  }

  if (dp[s.size()]) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}