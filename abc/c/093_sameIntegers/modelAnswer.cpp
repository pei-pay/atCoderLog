#include <iostream>
// #include <string>
#include <algorithm>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  // 最終的に揃う数
  int x = 0;
  /**
   * M = max(A, B, C)
   * (3x - (A, B, C))/2 が答え
   * x の条件は下記2つ
   * 1. x >= Mとする
   * 2. 3x ≡ A + B + C (mod2)
   * -> 上記2つを満たすxはM,M+1
   */
  int M = max(A, max(B, C));
  if ((3 * M - (A + B + C)) % 2 == 0) {
    x = M;
  } else {
    x = M + 1;
  }

  cout << (3 * x - (A + B + C)) / 2 << endl;

  return 0;
}