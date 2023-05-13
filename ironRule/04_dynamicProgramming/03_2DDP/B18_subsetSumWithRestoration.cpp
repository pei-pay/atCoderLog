#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, S, A[69];
bool dp[69][100009];
int main() {
  cin >> N >> S;
  rep1(i, N) cin >> A[i];

  dp[0][0] = true;
  rep1(i, S) dp[0][i] = false;

  rep1(i, N) {
    rep(j, S + 1) {
      if (j < A[i]) {
        if (dp[i - 1][j]) dp[i][j] = true;
        else dp[i][j] = false;
      }
      if (j >= A[i]) {
        if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true) dp[i][j] = true;
        else dp[i][j] = false;
      }
    }
  }

  // 存在しない場合
  if (!dp[N][S]) {
    cout << -1 << endl;
    return 0;
  }

  // 答えの復元
  int place = S; // placeは現在の総和。Sからスタート
  vector<int> answer;
  for (int i = N; i >= 1; i--) {
    if (dp[i - 1][place] == true) place = place - 0; // カードiを選ばない
    else {
      place = place - A[i]; // カードiを選ぶ
      answer.push_back(A[i]);
    }
  }
  reverse(answer.begin(), answer.end());


  // 出力
  cout << answer.size() << endl;
  rep(i, answer.size()) {
    if (i >= 1) cout << " ";
    cout << answer[i];
  }
  cout << endl;

  return 0;
}