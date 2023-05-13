#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, W;
int w[109], v[109];
long long  dp[109][100009];

int main() {
  cin >> N >> W;
  rep1(i, N) {
    cin >> w[i] >> v[i];
  }
  rep(i, N + 1) {
    rep(j, W + 1) {
      dp[i][j] = -1'000'000'000'000'000LL;
    }
  }
  dp[0][0] = 0;
  rep1(i, N) {
    rep(j, W + 1) {
      if (j < w[i]) dp[i][j] = dp[i - 1][j];
      else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
    }
  }

  long long answer = 0;
  rep(i, W + 1) answer = max(answer, dp[N][i]);

  cout << answer << endl;
  return 0;
}