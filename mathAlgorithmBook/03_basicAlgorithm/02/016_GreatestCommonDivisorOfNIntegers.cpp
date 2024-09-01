#include <iostream>
using namespace std;

// N 個の正の整数の最大公約数を求めてください。
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

int main() {
  int N;
  long long A[100010];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  long long R = GCD(A[0], A[1]);
  for (int i = 2; i < N; i++) {
    R = GCD(R, A[i]);
  }

  cout << R << endl;
  return 0;
}