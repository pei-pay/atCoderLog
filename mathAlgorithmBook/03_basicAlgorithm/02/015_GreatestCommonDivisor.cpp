#include <iostream>
using namespace std;

// ユークリッドの互除法
long long GCD(long long A, long long B) {
  while (A >= 1 && B >= 1) {
    if (A < B)
      B = B % A;
    else
      A = A % B;
  }

  if (A >= 1) return A;
  return B;
}

// 再起関数を用いたユークリッドの互除法
long long GCD(long long A, long long B) {
  if(B == 0 ) return A;
  return GCD(B, A % B);
}

int main() {
  long long A, B;
  cin >> A >> B;

  cout << GCD(A, B) << endl;
  return 0;
}