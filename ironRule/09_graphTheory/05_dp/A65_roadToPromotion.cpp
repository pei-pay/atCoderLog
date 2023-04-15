#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)


int main() {
  int N, A[100009], dp[100009];
  vector<int> G[100009];
  cin >> N;
  for (int i = 2; i <= N; i++) {
    cin >> A[i];
    G[A[i]].push_back(i);
  }

  for (int i = N; i >= 1; i--) {
    dp[i] = 0;
    rep(j, G[i].size()) dp[i] += (dp[G[i][j]] + 1);
  }

  rep1(i, N) {
    if (i >= 2) cout << " ";
    cout << dp[i];
  }
  cout << '\n';
  return 0;
}