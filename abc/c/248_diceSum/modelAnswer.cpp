#include <iostream>
#include <vector>
// #include <string>
// #include <algorithm>
using namespace std;

const int mod = 998244353;

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  vector<vector<int>> dp(N + 1, vector<int>(K + 1));
  dp[0][0] = 1;
  for (int x = 0; x <= N; x++) {
    for (int y = 0; y <= K; y++) {
      int now = 0;
      for (int i = 1; i <= M; i++) {
        now += dp[x - 1][y - i];
        now %= mod;
      }
      dp[x][y] = now;
    }
  }
  int ans = 0;
  for (int y = 0; y <= K; y++) {
    ans += dp[N][y];
    ans %= mod;
  }

  cout << ans << endl;
  return 0;
}