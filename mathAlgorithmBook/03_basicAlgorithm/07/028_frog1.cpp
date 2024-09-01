#include <iostream>
using namespace std;

int N, H[100010], dp[100010];

int main() {
  cin >> N;
  for(int i = 0; i < N; i++) cin >> H[i];

  for(int i = 0; i <  N; i++) {
    if(i == 0) dp[i] == 0;
    // 
    if(i == 1) dp[i] = abs(H[i - 1] - H[i]);
    if(i >= 2) {
      // 1個前の足場からジャンプ
      int v1 = dp[i -1] + abs(H[i - 1] - H[i]);
      // 2個前の足場からジャンプ
      int v2 = dp[i - 2] + abs(H[i - 2] - H[i]);
      dp[i] = min(v1, v2);
    }
  }

  cout << dp[N - 1] << endl;

  return 0;
}