#include <iostream>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)


int H, W, N;
int A[100009], B[100009], C[100009], D[100009];
int X[1509][1509], Z[1509][1509];

int main() {
  cin >> H >> W >> N;
  rep1(i, N) cin >> A[i] >> B[i] >> C[i] >> D[i];

  rep1(i, N) {
    X[A[i]][B[i]] += 1;
    X[A[i]][D[i] + 1] -= 1;
    X[C[i] + 1][B[i]] -= 1;
    X[C[i] + 1][D[i] + 1] += 1;
  }

  // 二次元累積和をとる
  rep(i, H + 1) {
    rep(j, W + 1) Z[i][j] = 0;
  }
  rep1(i, H) {
    rep1(j, W) Z[i][j] = Z[i][j - 1] + X[i][j];
  }
  rep1(j, W) {
    rep1(i, H) Z[i][j] = Z[i][j] = Z[i - 1][j] + Z[i][j];
  }

  rep1(i, H) {
    rep1(j, W) {
      if (j >= 2) cout << " ";
      cout << Z[i][j];
    }
    cout << '\n';
  }
  return 0;
}