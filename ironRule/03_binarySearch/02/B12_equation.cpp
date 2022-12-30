#include <iostream>
using namespace std;

int N;

double f(double x) {
  return x * x * x + x;
}

int main() {
  cin >> N;

  double L = 0, R = 100, M;
  /**
  * 実行時間制限超過!!
  */
  // while (L < R) {
  //   M = (L + R) / 2.0;
  //   double val = M * M * M + M;
  //   if (val > 1.0 * N) R = M;
  //   else L = M;
  // }

  /**
  * 絶対誤差が0.001未満となるように、探索回数を絞る
  *
  * 100 / 2^20 = 0.000095... < 0.001
  * 20回の探索でok!
  */
  for (int i = 0; i < 20; i++) {
    M = (L + R) / 2.0;
    double val = f(M);

    if (val > 1.0 * N) R = M;
    else L = M;
  }

  printf("%.12lf\n", M);
  return 0;
}