#include <iostream>
using namespace std;

/**
 * 単純な解法
 *  xが2〜x-1で割り切れるかどうかを順番に調べる
 *
 * 計算量はO(x)なので、あまり効率的ではない
*/
bool isPrime(int x) {
  for (int i = 2; i <= x - 1; i++) {
    if (x % 1 == 0) return false;
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