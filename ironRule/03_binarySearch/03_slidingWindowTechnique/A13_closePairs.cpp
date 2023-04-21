#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i, n) for(int i = 1; i <= (n); i++)

int N, K;
int A[100009], R[100009];
int main() {
  cin >> N >> K;
  rep1(i, N) cin >> A[i];

  // しゃくとり法
  rep1(i, N - 1) {
    // スタート地点を決める
    if (i == 1) R[i] = 1;
    else R[i] = R[i - 1];

    // ギリギリまで増やしていく
    while (R[i] < N && A[R[i] + 1] - A[i] <= K) {
      R[i] += 1;
    }
  }

  // 出力（答えは最大 50 億程度になるので long long 型を使う必要があります）
  long long Answer = 0;
  rep1(i, N - 1) Answer += (R[i] - i);
  cout << Answer << endl;

  return 0;
}