#include <iostream>
using namespace std;

// i ~ N-1の範囲にNの約数が存在するか
bool has_divisor(int N, int i) {
  // ベースケース1
  if (N == i) return false;  // そもそも対象となる整数が無いのでfalse
  // ベースケース2
  if (N % i == 0)
    return true;  // 実際にiはNの約数なので、i ~ N-1の範囲に約数が存在する

  // 再帰ステップ
  // i+1 ~ N-1の範囲の結果がi ~ N-1の範囲の結果となる
  // (ベースケース2によって、iがNの約数の場合は取り除かれているので、あとはi+1 ~
  // N-1の範囲を調べればよい)
  return has_divisor(N, i + 1);
}

bool is_prime(int N) {
  if (N == 1)
    return false;
  else if (N == 2)
    return true;
  else
    return !has_divisor(N, 2);
}

int main() {
  cout << is_prime(1) << endl;
  cout << is_prime(2) << endl;
  cout << is_prime(12) << endl;
  cout << is_prime(13) << endl;
  cout << is_prime(113) << endl;
  return 0;
}