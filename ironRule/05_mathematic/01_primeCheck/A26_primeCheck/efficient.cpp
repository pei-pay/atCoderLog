#include <iostream>
using namespace std;

/**
 * 効率的な解法
 *  xが「2 〜 √x」で割り切れるかどうかを順番に調べる
 *
 * 計算量はO(√x)
*/
bool isPrime(int x) {
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) return false;
  }
  return true;
}

int main() {
  int Q, X[10009];
  cin >> Q;
  for (int i = 1; i <= Q; i++) cin >> X[i];

  for (int i = 1; i <= Q; i++) {
    if (isPrime(X[i])) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}