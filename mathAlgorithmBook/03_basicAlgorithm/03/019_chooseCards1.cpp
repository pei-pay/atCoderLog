#include <iostream>
// #include <string>
// #include <algorithm>
using namespace std;

long long N;
long long A[500009];
// 赤、黄、青のカードがそれぞれ何枚あるかを管理
long long x = 0, y = 0, z = 0;

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  /**
   * n個のものからr個のものを選ぶ方法は nCr 通り
   *
   * nCr = n!/ r!(n-r)!
   *
   * e.g.) nC2 = n! / 2(n-2)! = n(n-1)/2
   */

  // x,y,zを数え上げる
  for (int i = 0; i < N; i++) {
    if (A[i] == 1) x++;
    if (A[i] == 2) y++;
    if (A[i] == 3) z++;
  }

  cout << x * (x - 1) / 2 + y * (y - 1) / 2 + z * (z - 1) / 2 << endl;

  return 0;
}