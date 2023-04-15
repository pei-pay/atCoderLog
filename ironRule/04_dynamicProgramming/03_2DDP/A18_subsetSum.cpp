#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)


int N, S, A[69];
bool dp[69][10009];
int main() {
  cin >> N >> S;
  rep1(i, N) cin >> A[i];
  dp[0][0] = true;
  rep1(i, S) dp[0][i] = false;

  rep1(i, N) {
    rep(j, S + 1) {
      if (j < A[i]) {
        // カードi-1の時点で合計がj: カードを選ばなけばtrue
        if (dp[i - 1][j] == true) dp[i][j] = true;
        else dp[i][j] = false;
      }
      if (j >= A[i]) {
        // カードi-1の時点で合計がj - A[i]: カードiを選んでtrue
        if (dp[i - 1][j] == true | dp[i - 1][j - A[i]] == true) dp[i][j] = true;
        else dp[i][j] = false;
      }
    }
  }

  if (dp[N][S] == true) cout << "Yes" << "\n";
  else cout << "No" << "\n";

  return 0;
}