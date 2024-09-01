#include <iostream>
using namespace std;

long long N, S, A[69];

/*
* ビット全探索で解く場合(計算量: 2のN乗)
*/
// int main() {
//   cin >> N >> S;
//   for(int i = 1; i <= N; i++) cin >> A[i];

//   // 全バターンを探索: (1LL << N)は2のN乗 (左シフト演算)
//   for(long long i = 0; i < (1LL << N); i++) {
//     long long sum = 0;

//     for(int j = 1; j <= N; j++) {
//       // ビット演算
//       // iの2進法表記の下からj番目が1の場合、sumにA[j]を足す(=j番目のカードが選ばれたという意味)
//       if((i & (1LL << (j - 1))) != 0LL) sum += A[j];
//     }


//     if(sum == S) { 
//       cout << "Yes" << endl;
//       return 0;
//     }
//   }

//   cout << "No" << endl;

//   return 0;
// }


/**
 * 動的計画法で解く場合(計算量: NS)
 */
bool dp[69][10009];
int main() {
  cin >> N >> S;
  for(int i = 1; i <= N; i++) cin >> A[i];

  dp[0][0] = true;
  for (int i = 1; i <= S; i++) dp[0][i] = false;

  for(int i = 1; i <= N; i++) {
    for(int j = 0; j <= S; j++) {
      if(j < A[i]) dp[i][j] = dp[i - 1][j];
      if(j >= A[i]) {
        if(dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true) dp[i][j] = true;
        else dp[i][j] = false;
      }
    }
  }

  if(dp[N][S] == true) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}

