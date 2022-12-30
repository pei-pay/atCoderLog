#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  int A[100009], B[100009];
  int dp[100009];
  vector<int> ans;

  // 入力
  cin >> N;
  for (int i = 2; i <= N; i++) cin >> A[i];
  for (int i = 3; i <= N; i++) cin >> B[i];

  // dp[i]: iまでの最短時間を求める(動的計画法)
  dp[1] = 0;
  dp[2] = A[2];
  for (int i = 3; i <= N; i++) {
    dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);
  }

  // Nに至るまでの経路を算出(動的計画法の復元)
  int Place = N;
  while (true) {
    ans.push_back(Place);
    if (Place == 1) break;

    if (dp[Place - 1] + A[Place] == dp[Place]) Place -= 1;
    else Place -= 2;
  }

  reverse(ans.begin(), ans.end());

  // 出力
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++) {
    if (i > 0) cout << "\x20";
    cout << ans[i];
  }
  cout << endl;

  return 0;
}