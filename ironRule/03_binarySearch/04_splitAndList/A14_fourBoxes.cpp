#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)

int N, K, A[1009], B[1009], C[1009], D[1009];
int P[1000009], Q[1000009];

int main() {
  // 入力
  cin >> N >> K;
  rep1(i, N) cin >> A[i];
  rep1(i, N) cin >> B[i];
  rep1(i, N) cin >> C[i];
  rep1(i, N) cin >> D[i];
  // 配列PとQの作成
  rep1(i, N) {
    rep1(j, N) P[(i - 1) * N + j] = A[i] + B[j];
  }
  rep1(i, N) {
    rep1(j, N) Q[(i - 1) * N + j] = C[i] + D[j];
  }

  sort(Q + 1, Q + (N * N) + 1);

  rep1(i, N * N) {
    int pos = lower_bound(Q + 1, Q + (N * N) + 1, K - P[i]) - Q;
    if (pos <= N * N && Q[pos] == K - P[i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
