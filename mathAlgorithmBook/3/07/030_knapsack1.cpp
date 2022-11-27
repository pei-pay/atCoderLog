#include <iostream>
using namespace std;

long long N, W, w[109], v[109];
long long dp[109][100009];

int main() {
  cin >> N >> W;
  for(int i = 1; i <= N; i++) cin >> w[i] >> v[i];

  // // 配列の初期化
  dp[0][0] = 0;
  // // 存在しない選び方の値は-2⁶⁰などの非常に小さい値で初期化しておく
  for(int i = 1; i <= W; i++) dp[0][i] = -(1LL << 60);


  // // 動的計画法
  for(int i = 1; i <= N; i++) {
    for(int j = 0; j <= W; j++) {
      if(j < w[i]) dp[i][j] = dp[i-1][j];
      if(j >= w[i]) dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i]] + v[i]);
    }
  }

  // // 答えを出力
  long long Answer = 0;
  for(int i = 0; i <= W; i++) Answer = max(Answer, dp[N][i]);

  cout << Answer << endl;

  return 0;
}